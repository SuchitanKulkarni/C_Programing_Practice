//Q5.Scan a number from user.Check if it is even or odd

#include<stdio.h>
int main()
{
	int num;
	puts("Enter the Number");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		puts("Even");
	}
	else
	{
		puts("Odd");
	}
	
	return 0;
}
