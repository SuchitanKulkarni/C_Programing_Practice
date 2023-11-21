/* 
Q2.Scan an array of 6 integers from user.Print addition of all integers in the array.
pointer notation */

#include<stdio.h>
int main()
{
	int num[6];
	int *p;
	int *q;
	p = &num[0];
	q = &num[5];
	int i,sum =0;
	puts("\nEnter the 6 integers for array:");
	
	for(i=0;i<=5;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<=5;i++)
	{
		sum = sum + *(p+i);
	}
	printf("\nAddition = %d",sum);
	
	return 0;
}
