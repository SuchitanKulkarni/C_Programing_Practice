/* Q.2.10.Scan a number from user.Check if it is prime or not.*/

#include<stdio.h>
int main()
{
	int num,i;
	puts("\n Enter the number:");
	scanf("%d",&num);
	
		for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			printf("\nNot prime");
			break;
		}
	}
	if(i==num)
	{
		printf("\nPrime");
	}
	return 0;
}
