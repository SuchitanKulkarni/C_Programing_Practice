/* Q.1.6.Find n! */

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	puts("\nEnter the Integer : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("factorial = %d",fact);
	return 0;
}
