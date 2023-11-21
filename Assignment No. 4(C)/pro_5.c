/* Q5.Write a menu driven program for arithmetic operations of 2 integers.
(Menu Driven means switch case) */

#include<stdio.h>
int main()
{
	int num1,num2;
	char choice;
	puts("\n Enter two integer = ");
	scanf("%d%d",&num1,&num2);
	puts("\n press \n + = ADD \n - = SUB \n * = MULTI \n / = DIV ");
	printf("\n Enter your choice");
	scanf("%c",&choice);
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '+' : printf("ADDITION = %d",num1+num2);
		           break;
		           
		case '-' : printf("SUBSTRACTION = %d",num1-num2);
		           break;
		           
		case '*' : printf("MULTIPLICATION = %d", num1*num2);
		           break;
		           
		case '/' : printf("DIVISION = %f",(float)num1/num2);
		           break;
		           
		default : printf("Wrong choice");
	}
	return 0;
	
}

