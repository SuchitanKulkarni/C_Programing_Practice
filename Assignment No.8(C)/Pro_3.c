 /* 3. Define a function getdata() to scan a character and a fraction value from user. */
 
#include<stdio.h>
void getdata();
int main()
{
	getdata();
}
void getdata()
{
	char ch;
	float x;
	
	puts("\nEnter the character : ");
	scanf("%c",&ch);
	puts("\nEnter the Fraction values : ");
	scanf("%f",&x);
	
	printf("Character = %c \nFraction = %f",ch,x);
}

