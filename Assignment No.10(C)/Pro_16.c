/* 7)Complete the following code which checks if given number is prime or not.
int main()
{
	int num;
	printf("\nEnter number to check if it is prime or not = ");
	scanf("%d",&num);
	if( isprime(num) == 1 )
	{
		printf("\nGiven number is prime");
	}
	else
	{
		printf("\nGiven number is not prime");
	}
	return 0;
} */

#include<stdio.h>
int isprime(int x);
int main()
{
	int num;
	printf("\nEnter number to check if it is prime or not = ");
	scanf("%d",&num);
	if( isprime(num) == 1 )
	{
		printf("\nGiven number is prime");
	}
	else
	{
		printf("\nGiven number is not prime");
	}
	return 0;
}
int isprime(int x)
{ 
    int i,num;
	num = x;
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			return 0;
		
		}
		
	}
	if(i==num)
	{
		return 1;
	}
	
}
