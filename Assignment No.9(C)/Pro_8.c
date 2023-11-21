/* 8)Scan an integer, a character and a fraction value from user and print it.
(Remeber the problem we faced here,Scan each value using different scanf() statements.) */

#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	
	puts("\nEnter the integer :");
	scanf("%d",&a);
	printf("a = %d",a);
	
	puts("\n\nEnter the fraction value :");
	scanf("%f",&b);
	printf("b = %f",b);
	
	puts("\n\nEnter the Character :");
	scanf("%c",&c);
	scanf("%c",&c);
	printf("c =%c",c);
	
	return 0;
}

