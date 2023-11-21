/* (Q.2.5) */

#include<stdio.h>
void myfun(int x);
int g = 2;
int main()
{
	myfun(g);
	printf("\nAfter function call g = %d",g);
	return 0;
}

void myfun(int x)
{
	x = x + 5;
}
