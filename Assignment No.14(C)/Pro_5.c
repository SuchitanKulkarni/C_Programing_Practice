/* 5.Create an array of n integers by scanning data from user.Sort this array of 
n integers in ascending order. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int * p;
	int n;
	puts("\nEnter the number :");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	
	int i;
	puts("\nEnter the number :");
	for(i=0;i<n;i++)
	{
	scanf("%d",p+i);
	}
	int temp;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((*(p+i))>(*(p+j)))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	
	return 0;

}
