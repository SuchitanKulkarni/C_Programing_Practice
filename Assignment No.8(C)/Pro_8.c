/* 8. Scan radius of a circle in main().Define function to find its area and circumference.
Print both results back in main().(functions returning values) */

#include<stdio.h>
int area(int r);
int circum(int r);

int main()
{
	int rad;
	float res1,res2;
	
	puts("\nEnter the radius of Circle : ");
	scanf("%d",&rad);
	
	res1 = area(rad);
	res2 = circum(rad);
	
	printf("\nArea = %f \nCircumference = %f",res1,res2);
	
	return 0;
}
int area(int r)
{
	return 3.14*r*r;
}
int circum(int r)
{
	return 3.14*2*r;
}
