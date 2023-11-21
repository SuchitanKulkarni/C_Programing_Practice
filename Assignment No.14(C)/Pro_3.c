/* 3.Write a program to scan a number from user and check if it is primr or not. */
#include<stdio.h>
int prime(int p);
int main()
{
	int num;
	puts("\nEnter the number :");
	scanf("%d",&num);
	
	int res;
	res = prime(num);
	
	if(res==1)
	{
		printf("\n Given is Prime number");
	}
	else
	{
		puts("Is not prime");
	}
	
	return 0;
}
int prime(int p)
{
	int i;
	for(i=2;i<p;i++)
	{
		if(p%i==0)
		{
				return 0;
		}
	}
	if(i==p)
	{
		return 1;
	}
}
