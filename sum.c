#include<stdio.h>
int add(int,int);
int add(int x,int y)
{
	int result=x+y;
	return(result);
}
int main()
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	int sum=add(a,b);
	printf("The sum of two numbers are:%d\n",sum);
	return(0);
}
