/* 1)Scan 2 numbers from user.Find their LCM and GCD. */

#include<stdio.h>
int main()
{
	int num1,num2,max,min,i;
	puts("\nEnter two integers :");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;
	}
	
	for(i=max;i<=min*max;i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			printf("\nLCM = %d",i);
			break;
		}
	}
	for(i=min;i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			printf("\nGCD = %d",i);
			break;
		}
	}
	
	return 0;
}

