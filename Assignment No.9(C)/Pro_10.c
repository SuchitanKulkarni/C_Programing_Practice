/* 10)Keep scanning numbers from user until user enters 0.These numbers could be positive or negative.
Stop canning numbers from user when user enters 0 and print count of positive and negative numbers user entered. */

#include<stdio.h>
int main()
{
	int i,Positive = 0,Negative = 0;
	
	while(2<3)
	{
		puts("\n\nEnter the number : ");
		scanf("%d",&i);
		
		if(i==0)
		{
			break;
		}
		
		printf("\ni = %d",i);
		
		if(i>0)
		{
			Positive = Positive + 1;
		
		}
		else
		{
			Negative = Negative + 1;
		
		}
	}
	
	
	printf("\nPositive = %d",Positive);
	printf("\nNegative = %d",Negative);
	
	return 0;
}
