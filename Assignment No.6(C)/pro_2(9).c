/* Q.2.9.Scan 2 numbers from user.Find their GCD. */

#include<stdio.h>
int main()
{

	int num1,num2,max=0,min=0,i=0;
	puts("\nEnter two integers :");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		max=num1;
		min=num2;
	}
	else if(num2>num1)
	{
		max=num2;
		min=num1;
	}
	else
	{
		puts("\nWrong inputs");
	}
	
	for(i=min;i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			printf("\n GCD = %d",i);
			break;
		}
	}

	return 0;
	
}
