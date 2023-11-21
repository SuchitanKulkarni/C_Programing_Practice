/* 9)Scan 2 integers from user.Write a function lcmgcd() to find their lcm and gcd.Print both results in function itself. */

#include<stdio.h>
void lcmgcd(int x, int y);
int main()
{
	int num1,num2;
	puts("\nEnter two integers :");
	scanf("%d%d",&num1,&num2);
	
	lcmgcd(num1,num2);
	
	return 0;
}
void lcmgcd(int x, int y)
{
	int max,min,i;
	
	if(x>y)
	{
		max = x;
		min = y;
	}
	else
	{
		min = x;
		max = y;
	}
	
	for(i=max;i<=min*max;i++)
	{
		if(i%x==0 && i%y==0)
		{
			printf("\nLCM = %d",i);
			break;
		}
	}
	for(i=min;i>=1;i--)
	{
		if(x%i==0 && y%i==0)
		{
			printf("\nGCD = %d",i);
			break;
		}
	}

}


