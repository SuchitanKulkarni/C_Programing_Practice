/* 4.WAP to find n th prime number.Here n is the input from user.*/

#include<stdio.h>
int isprime(int num);
int main()
{
	int n,count =0;
	puts("\nEnter the n :");
	scanf("%d",&n);
	int num=2;
	while(1)
	{
		if(isprime(num)==1)
		{
			count++;
				printf("\n%d",num);
		}
		if(count==n)
		{
			break;
		}
		
		num++;
	}
	
	return 0;
}
 int isprime(int num)
{
	int i,flag =0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag =1;
		    return 0;
		}
		
	}
	if(flag ==0)
	{
		return 1;
	}
}
