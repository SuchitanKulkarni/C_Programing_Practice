/* 9.Scan a number from user.Check if it pallindrome or not. */

#include<stdio.h>
int main()
{
	int num;
	puts("\nEnter the number :");
	scanf("%d",&num);
	int x = num;
	int i;
	int rem,sum=0;
	while(num>0)
	{
		rem = num % 10;
		num = num/10;
		sum = sum *10 + rem;
	}
	printf("%d",sum);
	
	if(x == sum)
	{
		
		puts("\n It is pallindrome");
	}
	else
	{
		puts("\n It is not a pallindrome");
	}
	
	return 0;
	
}
