//Q6.Scan 2 numbers from user,compare them using else_if ladder.

#include<stdio.h>
int main()
{
	int num1,num2;
	puts("Enter the Numbers");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("%d>%d",num1,num2);
	}
	else if(num1<num2)
	{
		printf("%d<%d",num1,num2);
	}
	else
	{
		printf("%d==%d",num1,num2);
	}
	
	return 0;
}
