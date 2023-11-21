//Q.9 Scan 2 integer from user. print their addition without using "+" sign

#include <stdio.h>
int main()
{
	int num1,num2;
	printf(" \n Enter the two nymbers :");
	scanf("%d %d",&num1,&num2);
	printf("\n The num1 = %d",num1);
	printf(" \n The num2 = %d",num2);
	printf("\n The Addition = %d",num1-(-num2));
	
	return 0;
	
	
	
}
