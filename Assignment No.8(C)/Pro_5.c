/* 5. Scan a radius from user.Define functions area() and circumference() to find area() 
and circumference() of circle.Print each result in fuction itself. */

#include<stdio.h>
void area(int r);
void circum(int r);

int main()
{
	int rad;
	
	puts("\nEnter the radius of Circle : ");
	scanf("%d",&rad);
	
	area(rad);
	circum(rad);
	
	return 0;
}
void area(int r)
{
	float Area;
	
	Area = 3.14*r*r;
	printf("\nArea of Circle = %f",Area);
	
}
void circum(int r)
{
	float Circum;
	
	Circum = 3.14*2*r;
	printf("\nCircumference = %f",Circum);
}
