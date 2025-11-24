#include<stdio.h>
char univ_set[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char set1[26],set2[26],bit_vec1[26],bit_vec2[26],result[26];

void initializeset()
{
	for(int i=0;i<26;i++)
	{
		bit_vec1[i]=0;
		bit_vec2[i]=0;
		result[i]=0;
	}
}
void bitvector(char ary[26],char bit[26],int num)
{
	for(int i=0;i<num1;i++)
	{
		for(j=0;j<26;j++)
		{
			char c=tolower(ary[i]);
			if(c==univ_set[j])
			{
				bit[j]=1;
			}
		}
	}
}
int main()
{
	int num1,num2;
	printf("No. of elements you want to set1:");
	scanf("%d",&num1);
	printf("Enter the elements to the first set");
	for(int i=0;i<num1;i++)
	{
		scanf("%c",&set1[i]);
	}
	printf("No. of elements you want to second set:");
	scanf("%d",&num2);
	printf("Enter the elements to the second set");
	for(int i=0;i<num2;i++)
	{
		scanf("%c",&set2[i]);
	}
}
