/* 2.Scan a number from user.Check if it is prime or not.
Define function isprime() to check if prime or not. */

#include<stdio.h>
void isprime(int num);
int main()
{
	int num;
	puts("\nEnter the integer :");
	scanf("%d",&num);
	
	isprime(num);
	
	return 0;
}
void isprime(int num)
{
	int i,flag=0;
	for(i=2;i<num/2;i++)
	{ 
	    flag=1;
		printf("Not prime");
	}
	
	if(flag==0)
	{
		printf("Prime");
	}
}


