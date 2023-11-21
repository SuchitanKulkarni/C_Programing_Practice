/*Q19.Scan 2 numbers from user.Then ask user to enter numbers between 1 to 4.
If user enters 1,print addition of given 2 numbers.
If user enters 2,print subtraction of given 2 numbers.
If user enters 3,print division of given 2 numbers.
If user enters 4,print multiplication of given 2 numbers.*/

#include<stdio.h>
int main()
{
	int num1,num2,n;
	puts("\n Enter Two numbers = ");
	scanf("%d%d",&num1,&num2);
	puts("\npress\n\n1 = Addition\n2 = Substraction\n3 = Division\n4 = Multiplication");
	puts("\nEnter your Choice :");
	scanf("%d",&n);
	
	if(n=1)
	{
		printf("\nAddition = %d",num1+num2);
	}
	else if(n=2)
	{
		printf("\nSubtraction = %d",num1-num2);
	}
	else if(n=3)
	{
		printf("\nDivision = %d",num1/num2);
	}
	else if(n=4)
	{
		printf("\nMultiplication = %d",num1*num2);
	}
	else
	{
		printf("\nInvalid Choice");
	}
	
	return 0;
}
