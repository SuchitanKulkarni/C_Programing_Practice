/* 7.Create an array of n integers.(revise malloc()).Scan elements of array from user and print their addition. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	
	puts("\nEnter the value of n :");
	scanf("%d",&n);
	
	p = (int *)malloc(n*sizeof(int));
	
	puts("\nEnter the digits in array :");
	
	int i,sum =0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum + *(p+i);
	}
	
	printf("\nAddition = %d",sum);
	
	return 0;
}

