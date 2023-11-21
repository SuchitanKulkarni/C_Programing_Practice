/* 1. Scan 2 integers from user in main().Define function addition() to add these integers.
  Print result in addition function itself. */
  
#include<stdio.h>
void addition(int x,int y);
int main ()
{
	int num1,num2;
	
	puts("\nEnter the two integers : ");
	scanf("%d%d",&num1,&num2);
	
	addition(num1,num2);
	
	
	return 0;
}
void addition(int x,int y)
{
	printf("Addition = %d",x+y);
}
