/* Q.1.6.WAP to count number of digits in a number using while loop.*/

#include<stdio.h>
int main()
{
	int num,res;
	puts("\n Enter the Number :");
	scanf("%d",&num);
	int count =0;

	while(num>0)
	{
		res = num%10;
		num = num/10;
		count++;
	}
	
	printf("\nCount = %d",count);
	
	return 0;
}

