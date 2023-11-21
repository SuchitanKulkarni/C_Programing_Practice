/* 3)Scan 2 integers from user in main().Write a function to find their addition and subtraction.Print results in 
function itself. */

#include<stdio.h>
void addition(int x, int y);
void subtraction(int x,int y);
int main()
{
	int num1,num2;
	puts("\nEnter the two integers :");
	scanf("%d%d",&num1,&num2);
	
	addition(num1,num2);
	subtraction(num1,num2);
	
	return 0;
}
void addition(int x, int y)
{
	printf("\nAddition = %d",x+y);
}
void subtraction(int x, int y)
{
	printf("\nSubtraction = %d",x-y);
}
