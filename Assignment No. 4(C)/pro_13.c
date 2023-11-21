/* Q13.Print first n natural numbers. */

#include<stdio.h>
int main()
{
	int x;
	int n;
	puts("\n Enter the number = ");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
		printf("\n%d",x);
	}
	return 0;
}

