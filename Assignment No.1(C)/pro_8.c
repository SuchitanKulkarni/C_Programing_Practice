//Q.8 Scan 4 digit number from user . print each of its digit seperately.

#include<stdio.h>
int main ()
{
	int num;
	printf("Enter the 4 digit number :");
	scanf("%d",&num);
	printf("The value is = %d",num%10);
	num = num/10;
	printf("\nThe value is = %d",num%10);
	num = num/10;
	printf("\nThe value is = %d",num%10);
	num = num/10;
	printf("\nThe value is = %d",num%10);
	
	return 0;
}
