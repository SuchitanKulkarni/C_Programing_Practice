 /* (Q.2.4) */
 
#include<stdio.h>

void myfun(int x);
void yourfun(int y);

int main()
{
	myfun(1);
	return 0;
}

void myfun(int x)
{
	x++;
	printf("x = %d",x);
	yourfun(x+2);
}

void yourfun(int y)
{
	printf("\ny = %d",y);
}
