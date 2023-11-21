/* 2)WAP to explain global variables. */

#include<stdio.h>

void myfun();
int x = 10;

int main()
{
	x++;
	printf("\n x = %d",x);
	
	myfun();
	myfun();
	
	return 0;
}
void myfun()
{
	x++;
	printf("\n x = %d",x);
}

