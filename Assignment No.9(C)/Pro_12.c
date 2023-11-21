/* 12)Complete the following main() function.

 int main()
{
	int   length , width ;
	printf("\nEnter length and width\n");
	scanf("%d%d",&length,&width);
	if( square(length,width) )
	{
		printf("It is a square");
	}
	else
	{
		printf("It is a rectangle");
	}
	return 0;
} */

#include<stdio.h>
int square(int x, int y);
int main()
{
	int   length , width ;
	printf("\nEnter length and width\n");
	scanf("%d%d",&length,&width);
	if( square(length,width) )
	{
		printf("It is a square");
	}
	else
	{
		printf("It is a rectangle");
	}
	return 0;
}
int square(int x, int y)
{
	if(x==y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
