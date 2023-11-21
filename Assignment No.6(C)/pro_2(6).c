/* Q.2.6.Scan 2 numbers from user.Find their LCM.(using for) */

#include<stdio.h>
int main()
{
	int num1,num2,max,min,i;
	puts("\nEnter the two integers :");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
	   max=num1;
	   min=num2;	
	}
	else if(num2>num1)
	{
		max=num2;
		min= num1;
	}
	else
	{
		puts("\n Wrong input");
	}
	
	for(i=max;i<=num1*num2;i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			printf("LCM = %d",i);
			break;
		}
	}
	return 0;
}

