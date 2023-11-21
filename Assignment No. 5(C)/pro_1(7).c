/* Q.1.7.Find n! using while loop.*/

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	puts("\nEnter the Integer :");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	printf(" factorial = %d",fact);
	return 0;
}
