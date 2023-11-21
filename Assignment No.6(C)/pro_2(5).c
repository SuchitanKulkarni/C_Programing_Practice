/* Q.2.5.Write a menu driven program(switch case) to find arithmetic result of given 2 numbers. */

#include<stdio.h>
int main()
{
	int num1,num2,choice;
	puts("\n Enter the numbers :");
	scanf("%d%d",&num1,&num2);
	
	puts("\npress\n1 = Add.\n2 = Sub.\n3 = Multi.\n4 = Div.");
	puts("\n Enter your choice : ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1: printf("\nAddition = %d",num1+num2);
		        break;
		        
		case 2: printf("\nSubtraction = %d",num1-num2);
		        break;
		        
		case 3: printf("\nMultiplication = %d",num1*num2);
		        break;
		        
		case 4: printf("\nDivision = %d",num1/(float)num2);
		        break;
		        
		default : printf("\n wrong choice");
			
	}
	return 0;
}

