#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header;
struct node *header=NULL;
/*void createnode(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node)); *creating a node and return its address*
	newnode->data=10;                         *assigning data to the left of node*
	newnode->link=NULL;                        *assigning NULL to the right of node*
}*/
int insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node)); 
	newnode->data=item;                      
	newnode->link=NULL;  
	
	if(header!=NULL)
	{
		newnode->link=header;
		header=newnode;
	}
	else
	{
		header=newnode;
	}
}
int deleteAtFront()
{
	struct node *ptr;
	if(header==NULL)
	{
		printf("No node to delete,deletion not possible");
	}
	else
	{
		ptr=header;
		header=header->link;
		printf("The deleted node is %d\n",ptr->data);
		free(ptr);
	}
}
int insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node)); 
	newnode->data=item;                      
	newnode->link=NULL;  
	
	if(header!=NULL)
	{
		struct node *ptr;
		ptr=header;	
		while(ptr->link != NULL)
		{
			ptr=ptr->link;
			ptr->link=newnode;
		
		}	
	}
	else
	{
		header=newnode;
	}
}
int deleteAtEnd()
{
	if(header==NULL)
	{
		printf("No node to delete,deletion not possible");
	}
	else
	{
		struct node *ptr,*ptr1;
		ptr=ptr1=header;
		while(ptr->link!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		printf("The deleted node is %d\n",ptr->data);
		ptr1->link=NULL;
		free(ptr);	
	}	
}
int insertAtAny(int key,int item)
{
	struct node *ptr,*ptr1;
	int found=0;
	ptr=ptr1=header;
	while(ptr->link != NULL)
	{
		ptr1=ptr;
		ptr=ptr->link;
		if(ptr->data==key)
		{
			struct node *newnode;
			newnode=(struct node*)malloc(sizeof(struct node)); 
			newnode->data=item;                      
			newnode->link=ptr;
			ptr1->link=newnode;
			found = 1;
		}

	}	
	if(found==0)	
	{
		printf("Key not found");
	}
}
void deleteAtAny(int key)
{
	struct node *ptr,*ptr1;
	ptr=header;
	ptr1=NULL;
	while(ptr!=NULL && ptr->data!=key)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("Key not found, deletion not possible");
	}
	else
	{
		printf("Deleted element is %d\n",ptr->data);
		if(ptr1!=NULL)
		{
			ptr1->link=ptr->link;
		}
		else
		{
			header=ptr->link;  //this condition when a single node exit(header)
		}
		free(ptr);
	}
}
void traverselist()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
int main()
{
 	insertAtEnd(50);
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(30);
	insertAtFront(40);
	insertAtAny(20,90);
	deleteAtFront();
	deleteAtEnd();
	deleteAtAny(30);
	traverselist();
	return(0);
}
