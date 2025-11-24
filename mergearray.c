#include<stdio.h>
int main()
{
	int a3[100],a1[50],a2[50],z,i,j,n,m,temp;
	printf("Enter the no. of elements you want to the first array:");
	scanf("%d",&n);
	if(n>50)
	{
		printf("Over array1");
	}
	printf("Enter the elements to the first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d\n",a1[i]);
	}	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a1[i]>a1[j])
			{
				temp=a1[i];
				a1[i]=a1[j];
				a1[j]=temp;
			}
		}
	}
	printf("The elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d \n",a1[i]);
	}	
	printf("Enter the no. of elements you want to the second array:");
	scanf("%d",&m);
	if(m>50)
	{
		printf("Over array2");
	}
	printf("Enter the elements to the second array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("The elements in the second array:");
	for(i=0;i<m;i++)
	{
	printf(" %d \n",a2[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a2[i]>a2[j])
			{
				temp=a2[i];
				a2[i]=a2[j];
				a2[j]=temp;
			}
		}
	}
	printf("The elements after sorting:\n");
	for(i=0;i<m;i++)
	{
		printf(" %d \n",a2[i]);
	}
	printf("Merge array:\n");
	for(i=0;i<n;i++)
	{
		a3[i]=a1[i];
	}
	for(j=0;j<m;j++)
	{
		a3[i]=a2[j];
		i=i+1;
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ",a3[i]);
	}
	printf("\n");
	return 0;
}
