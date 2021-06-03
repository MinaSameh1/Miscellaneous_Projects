#include<stdio.h>
#include<stdlib.h>


/* Struct creation */
struct list {
	int data;
	struct list *next;
	struct list *prev;
};

/* Our start and end */
struct list *start;
struct list *end;

/* Function Declerations */
int initlist(struct list *,struct list *);
static int GetDataFromUser(int *);
struct list *create_node(int*);
static int addNode(struct list*);
static int PrintList(struct list*);
static int DeleteNode(struct list*,int);
void free_node(struct list *node);

/* Main Function */
int main(void)
{
	int data,*choice2=malloc(sizeof(int));
	char i,*choice=malloc(sizeof(char));
	/* Set start and end with NULL */
	if(initlist(start,end)) 
		/* If failed then exit with status 1 */
		exit(1);
	struct list *Node;
	for(i=0;i<10;i++) {
		GetDataFromUser(&data);
		Node=create_node(&data);
		/* If node is empty then warn user and don't add it to the list */
		if(Node=='\0') 
			printf("Warning: Something went wrong with Node!\n");
		else {
			if( i==0 ){
				start=Node;
				end=Node;
			}	       
			else
				if(addNode(Node)) 
					printf("WARNING failed to add node!\n");
		}
		}
	while( *choice != '4') {
		/* Ask the user for his choice! */
		printf("\tWhat would you like to do?\n1-Print the list\n2-Add a node\n3-Delete a node\n4-Delete the list and exit\nYour Choice:");
		fflush(stdout);
		scanf(" %c",choice);
		if( *choice == '1' )
			PrintList(start);
		else if( *choice == '2' ){
			GetDataFromUser(&data);
			Node=create_node(&data);
			addNode(Node);
		} else if ( *choice == '3' ) {
			PrintList(start);
			printf("What node would you like to delete?\n");
			fflush(stdout);
			scanf("%d",choice2);
			if(DeleteNode(start,*choice2))
				printf("Failed to delete Node,either node doesn't exist or error\n");
			else
				printf("Node deleted Successfully!\n");
			fflush(stdout);

		}
	}
	return 0;
}

int
initlist(struct list *start,struct list *end)
{
	start=end='\0';
	if( start != '\0' && end != '\0' ) 
		/* Return 1 if failed */
		return 1;
	else 
		return 0;
}

/* Create a node function */
struct list *
create_node(int *data)
{
	struct list *temp;
	/* allocate the mem for it */
	temp=(struct list *)malloc(sizeof(struct list *));
	temp->next=temp->prev='\0';
	temp->data=*data;
	/* Return the mem address of it :) */
	return temp;
}

/* Get num from user */
int 
GetDataFromUser(int *data)
{
	printf("\nEnter a number:");
	/* This is mainly because my editor(vim) and make files sometimes break the buffer, it is not a problem with the terminal or OS, its a problem with the user and i am too lazy to fix so instead i added a function that is literally famous for breaking buffers and making code excution slow, can't have a slow buffer if its broken :V */
	fflush(stdout);
	scanf("%d",data);
	return 0;
}
/* Add the node to the list */
int 
addNode(struct list *node)
{
	struct list *temp;
	temp=(struct list *)malloc(sizeof(struct list *));
	temp=start;
	while( temp != '\0' && temp->data < node->data ){
	      temp=temp->next;
	}
	if( temp == start ){
		node->next=start;
		start->prev=node;
		start=node;
		node->prev='\0';
	} else if ( temp == '\0' ){
		end->next=node;
		node->prev=end;
		end=node;
		end->next='\0';
	} else {
		node->prev=temp->prev;
		node->next=temp;
		temp->prev->next=node;
		temp->prev=node;
	}
	return 0; 
}

/* Print the list */
int
PrintList(struct list *start)
{
	int i=0;
	struct list *temp;
	temp=(struct list *)malloc(sizeof(struct list *));
	temp=start;
	printf("Printing List:-\n");
	while(temp != '\0'){
		printf("%d Data = %d\n",i,temp->data);
		temp=temp->next;
		i++;
	}     
	return 0;
}

/* Delete a Node by user's choice */
int
DeleteNode(
		/* Function parameters */
		struct list *start, /* The list we will delete the node from */
		int choice /* The node's rank, this is the node that will be deleted */)
{
	int i=0;
	struct list *temp=(struct list*)malloc(sizeof(struct list*));
	temp=start;
	while( temp != '\0' && i != choice ){
		temp=temp->next;
		i++;
	} 
	if( temp == '\0' ) return 1;
	if( temp == start) {
		start->next->prev='\0';
		temp=start;
		start=start->next;
		printf("Start New %d\n",start->data);
	}
	else if( temp == end ) {
		end->prev->next='\0';
		temp=end;
		end=end->prev;
		printf("end New %d\n",end->data);
	}
	else {
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
	}
	/* Normally this would work, but if you didn't malloc the var then you can't free it! thats the main issue! For some reason there are some nodes that don't get malloced or something , it always casues Segmation fault sadly.. */
	/* free(temp); */
	if( temp == '\0')
		return 0;
}
