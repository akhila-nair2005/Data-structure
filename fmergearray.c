#include<stdio.h>
int i,m,j,temp;
void sortArray(int a[],int size)
{
	for(i=0;i<size-1;i++)
	{
		for(j=1;j<size;j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void printArray(int arr[],int size,const char*name)
{
	printf("%s",name);
	for(int i=0;i<size;i++)
	{
		print("%d",arr[i]);
	}
	print("\n");
}
int main()
{
	int ar1[10],ar2[10],ar3[20];
	int sz1,sz2,sz3;
	printf("Enter the size of the 1st array:\n "
	scanf("%d",&sz1);
	if(sz1>10|| sz1<1)
	{
		printf("invaild size\n");
	}
	printf("Enter %d elements of the 1st array:\n ",sz1)
	for(int i=0)
}

