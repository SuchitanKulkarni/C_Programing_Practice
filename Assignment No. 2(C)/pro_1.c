//Q1.Scan 3 integers from user.Print their average.

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	float avg;
	printf("\n Enter the 3 integers :");
	scanf("%d%d%d",&num1,&num2,&num3);
	avg = (num1+num2+num3)/3.0;
	printf("\n Average is = %f",avg);
	return 0 ;
}
