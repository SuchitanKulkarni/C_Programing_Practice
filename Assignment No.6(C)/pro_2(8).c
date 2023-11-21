/* Q.2.8.Scan 2 numbers from user.Find their LCM.(using while) */

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
	
	i=max;
	while(i<=num1*num2)
	{ 
	    if(i%num1==0 && i%num2==0)
	    {
	    	printf("\n LCM = %d",i);
	    	break;
		}
		i++;
		
	}
	return 0;
}
