//Q.10 Scan 3 integers from user.Find the smallest of those 3 integers.

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	int max;
	
	printf("\n Enter 3 integers :");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	max = num1<num2 ? num1 : num2;
	
	max = max<num3 ? max : num3;
	
	printf("\n The Smaller value is = %d",max);
	
	return 0;
	
	
	
}
