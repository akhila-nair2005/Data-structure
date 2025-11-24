#include<stdio.h>
int main()
{
	int a[50],n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>50)
	{
		printf("Over\n");
	}
	else
	{
		printf("Enter %d numbers:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("The sum of %d numbers are %d\n ",n,sum);
	}
return 0;
}
