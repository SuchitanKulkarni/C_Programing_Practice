/* (Q.2.10) */

#include<stdio.h>

int myfun(int x);
int yourfun();
int main()
{
	int a;
	printf("\nSquare of 4 = %d",myfun(4));
}
int myfun(int x)
{
	int b;
	b = x*x;
	return b;
}
