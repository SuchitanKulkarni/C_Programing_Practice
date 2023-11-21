/* 1)WAP to explain static variable. */

#include<stdio.h>

void myfun();
int main()
{
	int x = 10;
	
	printf("\nx = %d",x);
	
	myfun();
	myfun();
	myfun();
	
	return 0;
}
void myfun()
{
	static int x = 5;
	x++;
	printf("\nX = %d",x);
}
