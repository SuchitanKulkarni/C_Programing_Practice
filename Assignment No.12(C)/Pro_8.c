/*
8.Scan array of 6 integers from user.Define function print() to print all elements
in array.(Passing array to function)*/

#include<stdio.h>
void Print(int *p,int n);
int main()
{
	int num[6];
	int i;
	puts("\nEnter the 6 integers :");
	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
	}
	
	Print(num,6);
	
	return 0;
}
void Print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
