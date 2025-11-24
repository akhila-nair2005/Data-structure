#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int counter=0;
struct stack
{
	int data;
	struct stack *link;
};
struct stack *top=NULL;
void push(int item)
{
	struct stack *newnode;
	newnode=(struct stack*)malloc(sizeof(struct stack)); 
	newnode->data=item;                      
	newnode->link=NULL;  
	
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		if(counter<MAX_SIZE)
		{
			newnode->link=stack;
			top=newnode;
			counter=counter+1;
		}
		else
		{
			print("stack is full");
		}
	}
	coounter=counter +1;
}
void pop()
{
	struct stack *top,*ptr;
	if(top==NULL)
	{
		printf("No item to delete,deletion not possible");
	}
	else
	{
		ptr=top;
		top=top->link;
		printf("The deleted item is %d\n",ptr->data);
		free(ptr);
	}
}
