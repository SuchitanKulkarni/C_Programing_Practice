//Q11.Scan length and width of a rectangle.Check if given rectangle is a square or not.

#include<stdio.h>
int main()
{
	int len,wid;
	puts("Enter the length and width of restangle");
	scanf("%d%d",&len,&wid);
	
	if(len==wid)
	{
		printf("Square");
	}
	else
	{
		printf("Rectangle");
	}
	
	return 0;
}
