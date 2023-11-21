// Q2.Scan a number from user.Check if it is multiple of 6 or not without using 6.

#include<stdio.h>
int main()
{
	int num;
	puts("Enter the Number");
	scanf("%d",&num);
	
	if(num%2==0 && num%3==0)
	{
		printf("%d is multiple of 6",num);
	
	}
	else
	{
		printf("%d is multiple of 6",num);
	}
}
