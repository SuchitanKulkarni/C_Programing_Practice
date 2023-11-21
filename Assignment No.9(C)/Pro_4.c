/* 4)Scan radius of a circle in main().Define function circle() to find area and circumference of circle.
Print results in function itself. */

#include<stdio.h>
void circle(float r);
int main()
{
	float rad;
	puts("\nEnter the radius :");
	scanf("%f",&rad);
	
	circle(rad);
	
	return 0;
}
void circle(float r)
{
	float area,circum;
	area = 3.14*r*r;
	circum = 3.14*2*r;
	
	printf("\nArea = %f	 Circumference = %f",area,circum);
}
