/* 4. Scan 2 integers in main().Perform their addition in add() function.
Perform their subtraction in sub() function.Print both results back in main().
Do not use parameter passing.(global) */

#include<stdio.h>
int addition();
int subtraction();

int num1,num2;

int main()
{   
    int res1,res2;
    
	puts("\nEnter the two integers : ");
	scanf("%d%d",&num1,&num2);
	
    res1 = addition();
	res2 = subtraction();
	
	printf("\nAddition = %d \nSubtraction = %d",res1,res2);
	
	return 0;
}
int addition()
{
	return num1+num2;
}
int subtraction()
{
	return num1-num2;
}
