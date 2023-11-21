/* 6. Scan 2 integers in main().Define function multiplication() to find their product.
Print result back in main(). */

#include<stdio.h>
int multipication(int x,int y);

int main()
{
	int num1,num2,res;
	
	puts("\nEnter two integers : ");
	scanf("%d%d",&num1,&num2);
	
	res = multiplication(num1,num2);
	
	printf("\nMultiplication = %d",res);
	
	return 0;
	
}
int multiplication(int x, int y)
{
	return x*y;
}

