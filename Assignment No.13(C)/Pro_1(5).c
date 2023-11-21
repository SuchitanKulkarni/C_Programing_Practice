/* Q.1.5.WAP to find sum of all odd numbers between 1 to n using while loop. */

#include<stdio.h>
int main()
{
	int n;
	puts("\n Enter the integer :");
	scanf("%d",&n);
	int i=0,sum =0;
	while(i<=n)
	{
		if(i%2==1)
		{
			sum = sum +i;
		}
		
		i++;
	}
	
	printf("\nAddition of all Odd numbers = %d",sum);
	
	return 0;
}
