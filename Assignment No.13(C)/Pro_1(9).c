/* Q.1.9.WAP to find all factors of a number.
Input number: 12
Factors of 12: 1, 2, 3, 4, 6, 12 */

#include<stdio.h>
int main ()
{
	int num,i;
	puts("\nEnter the integer :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
