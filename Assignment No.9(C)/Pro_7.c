/*  7)Complete the following code.Do not change main() function.

int main()
{
	int  number;
	printf("\nEnter a number");
	scanf("%d",&number);

	if( validNumber(number) )   
	{
		printf("Number is greater than 0");
	}
	else
	{
		printf("Number is less than 0");
	}
	return 0;
}

validNumber() checks if given number is greater than 0 or not. */

#include<stdio.h>

int validNumber(int a);
int main()
{
	int  number;
	printf("\nEnter a number");
	scanf("%d",&number);

	if( validNumber(number) )   
	{
		printf("Number is greater than 0");
	}
	else
	{
		printf("Number is less than 0");
	}
	return 0;
}
int validNumber(int a)
{
	return a;
}


