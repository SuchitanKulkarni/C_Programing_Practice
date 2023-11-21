//Q9.Scan 3 numbers from user.Find the largest integer.(Using if else)

#include<stdio.h>
int main()
{
		int num1,num2,num3;
	int max;
	puts("Enter the 3 Numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("The maximum number is = %d",num1);
		}
	}
	else if(num2>num1)
	{
		if(num2>num3)
		{
		printf("The maximum number is = %d",num2);
		}
	}
	else
	{
		printf("The maximum number is = %d",num3);
	}
		
	return 0;
}
