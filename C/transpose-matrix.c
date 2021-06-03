#include<stdio.h>
#include<stdlib.h>

//Some Global Variables 
int i,j;
int row=3,col=3;

//Function Declerations 
void askMatrix(int *);
void transposeMatrix(int *);
void file(int *,FILE *);
void save(int *);

int main(void){ 
	int *ptr=(int *) malloc(row*col*sizeof(int));
	FILE *fptr;
	int* x=malloc(1*sizeof(int));
	printf("Do you want to read from file or input the numbers?(1/2)");
	scanf("%d",x);
	if(*x==2) {
	askMatrix(ptr);
	transposeMatrix(ptr);
	}
	else {
		file(ptr,fptr);
		transposeMatrix(ptr);
	}
	free(ptr);
	return 0;
}

void askMatrix(int* ptr){

ask:
	printf("Enter The Matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Matrix [%d][%d]:",i,j);
			scanf("%d",ptr+i*col+j);
		}
	}
	printf("The matrix you entered is:\n");
	for(i=0;i<3;i++){
		printf("{\t");
		for(j=0;j<3;j++){
			printf("%d,\t",*(ptr+i*col+j));
		}
		printf("}\n");
	}
	char* x=malloc(1*sizeof(char));
	printf("Is this the correct array?(y/n)");
	scanf(" %c",x);
	if(*x=='n') goto ask;
}

void file(int* ptr,FILE *fptr){
retry:
	fptr=fopen("MyArray.bin","rb");
	char* buffer=malloc(200*sizeof(char));
	fread(ptr,sizeof(*ptr),sizeof(ptr)/sizeof(*ptr),fptr);
	fclose(fptr);
	printf("The matrix you entered is:\n");
	for(i=0;i<3;i++){
		printf("{\t");
		for(j=0;j<3;j++){
			printf("%d,\t",*(ptr+i*col+j));
		}
		printf("}\n");
	}
	char* x=malloc(1*sizeof(char));
	printf("Is this the correct array?(y/n)");
	scanf(" %c",x);
	if(*x=='n') {
		printf("Would you like to retry reading from file or input it manually?(y/n)");
		scanf(" %c",x);
		if(*x=='n') askMatrix(ptr);
		else goto retry;
	}

}

void transposeMatrix(int *ptr){
	int temp;
	printf("Transpose of Matrix=\n");
	for(i=0;i<3;i++){
		printf("{\t");
		for(j=0;j<3;j++){
			printf("%d\t",*(ptr+i+col*j));
		}
		printf("}\n");
	}
	char* x=malloc(1*sizeof(char));
	printf("Would you like to Save the Transposed Matrix? (y/n)");
	scanf(" %c",x);
	if(*x=='y'){
		save(ptr);
	}
}

 void save(int* ptr){
	FILE *fptr,*fbin;
	fptr = fopen("MyArray.txt","w");
	fbin = fopen("MyArray.bin","wb");
	if( fptr == NULL ) printf("Error Opening File!");
	for(i=0;i<3;i++){
		fprintf(fptr,"{\t");
		for(j=0;j<3;j++){
			fprintf(fptr,"%d\t",*(ptr+i+col*j));

		}
		fprintf(fptr,"}\n");
	}
	fwrite(ptr,sizeof(*ptr),sizeof(ptr)/sizeof(*ptr),fbin);
	fclose(fbin);
	fclose(fptr);
}
