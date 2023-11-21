/* 2. Scan 3 integers in main().
Define function smallest() to find the smallest value of them.Print result in function only. */

#include<stdio.h>
void smallest(int x,int y,int z);
int main()
{
	int num1,num2,num3;
	
	puts("\nEnter Three integers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	smallest(num1,num2,num3);
	
	return 0;
}
void smallest(int x,int y,int z)
{
	int min;
	
	min = x<y ? x : y ;
	min = min<z ? min : z ;
	
	printf("\n Smallest integer = %d",min);
}
