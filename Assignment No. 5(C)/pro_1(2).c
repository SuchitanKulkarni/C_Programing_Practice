/* Q.1. 2.Print first n natural numbers using while loop. */

#include<stdio.h>
int main()
{
	int n,i;
	puts("\nEnter the Integer : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
	return 0;
}
