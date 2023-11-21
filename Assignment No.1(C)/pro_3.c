//Q.3 Scan a character , an integer and a fraction values from user. scan these values in the following sequence .
// 1 = char , int , float 
// 2 = int , char , float 
// see the difference in both sequence.

#include<stdio.h>
int main ()
{
	int num ;
	char ch;
	float digit;
	
	printf("Enter the character ,integer and Fraction values :");
	scanf("%c %d %f",&ch,&num,&digit);
	printf("\n The character = %c",ch);
	printf("\n The integer = %d",num);
	printf("\n The fraction = %f",digit);
	
	scanf("%d %c %f",&num,&ch,&digit);
	printf("\n The integer = %d",num);
	printf("\n The character = %c",ch);
	printf("\n The fraction = %f",digit);
	return 0;
	
}
