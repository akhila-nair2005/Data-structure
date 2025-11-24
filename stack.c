#include<stdio.h>
#include<stdbool.h>
#define max_size 10
int s[max_size],top=-1,i,j,ele,choice,popped;
void push(int item)
{
	if(top>=max_size-1)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		s[top]=item;
		printf("The pushed element into the stack is:%d\n");
	}
}
int pop()
{
	if(top==-1)
	{
		printf("stack is empty");
		return -1;
	}
	else
	{
		popped=s[top];
		top-=1;
		printf("The popped element is:%d\n",popped);
	}
}	
int display()
{
	for(i=top;i>-1;i--)
	{
		printf("%d",s[i]);
		printf("\n");
	}
	return 1;
}
int main()
{
	while(true)
	{
		printf(" \n 1. push operation\n 2. pop operation \n 3. display \n 4. EXIT\n");
		printf("Enter the operation you want:\n");
		scanf("%d",&choice);
		if (choice==1)
		{
			printf("Enter the item you want to push:");
			scanf("%d",&ele);
			push(ele);
		}	
		else if(choice==2)
		{
			pop();
		}
		else if(choice==3)
		{
			printf("The elements in the stack are:");
			display();
		}
		else
		{ 
			if(choice>3)
			{
				printf("Your choice is invalid.\nplease enter choice 1-4\n");
				break;
			}
		}	
	}
	return 0;
}
