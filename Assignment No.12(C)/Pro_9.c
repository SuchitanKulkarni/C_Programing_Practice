/* 
9.Scan array 8 integers from user.Define function addition() to find addition of 
all integers in array.Print addition back in main(). */

#include<stdio.h>
int addition(int *p,int n);
int main()
{
	int num[8];
	int i,add;
	puts("\nEnter the 8 integers for array:");
	for (i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	add = addition(num,8);
	
	printf("\nAddition = %d",add);
	
	return 0;
}
int addition(int *p,int n)
{
	int i,sum =0;
	for(i=0;i<8;i++)
	{
		sum = sum +*(p+i);
	}
	
	return sum;
}
