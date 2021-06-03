#include<stdio.h>
#include<stdlib.h>

/* This is a Bubble Sort algrothrim that takes wayyyyy too long to actually sort */

/* Function Decleration */
void sort(int *,int);

int main(void)
{
	short i,size;
	printf("Enter Size of the array:");
	scanf("%u",&size);
	int *ptr_to_arr=malloc(size*sizeof(int));
	/* Loop to take elements from user*/
	for(i=0;i<size;i++)
	{
		printf("Enter element %u:",i+1);
		scanf("%d",ptr_to_arr+i);
	}
	/*Function Call*/
	sort(ptr_to_arr,size);
	exit(0);
}

/* Function Defineation */ 
void sort(int *ptr_to_arr,int size) /* Function Header */
{ /*Function Body */
	int i,Check=0,tmp;
	while(Check != size-1)
	{
		for(i=0;i<size-1;i++)
		{
			if(*(ptr_to_arr+i) > *(ptr_to_arr+i+1))
			{
				Check=0;
				tmp=*(ptr_to_arr+i);
				*(ptr_to_arr+i)=*(ptr_to_arr+i+1);
				*(ptr_to_arr+i+1)=tmp;
			}
			else Check+=1;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",*(ptr_to_arr+i));
	}
}
