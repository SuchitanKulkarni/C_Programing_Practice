/* Q.1.7.WAP to calculate product of digits of a number. */

#include<stdio.h>
int main()
{
	int num,product=1,res;
	puts("\nEnter the number :");
	scanf("%d",&num);
	
    while(num>0)
    {
    res = num%10;
	num = num/10;
	product = product*res;
	
	}
	
	printf("\nProduct of number = %d",product);
	
	return 0;

}
