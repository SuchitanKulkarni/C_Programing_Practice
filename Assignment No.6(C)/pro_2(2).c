/* Q.2.2.WAP to find n! .*/

#include<stdio.h>
int main()
{
	int n,i,fact=1;
	puts("\nEnter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial = %d",fact);
	return 0;
}
