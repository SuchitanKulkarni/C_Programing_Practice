/* Q1.Scan a number from user.If user gives 1,print "ONE",if user gives 2,print "TWO",
for 3,print "THREE".If user gives some other number,print wrong input.
Do this using if else.*/

#include<stdio.h>
int main()
{
	int num;
	puts("Enter a integer = ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("ONE");
	}
	else if(num==2)
	{
		puts("TWO");
	}
	else if(num==3)
	{
		puts("THREE");
	}
	else
	{
		puts("Wrong input");
	}
	
	return 0;
}
