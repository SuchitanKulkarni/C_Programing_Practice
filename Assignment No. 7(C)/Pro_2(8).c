/* (Q.2.8) */

#include<stdio.h>
int myfun(int x);
int main()
{
	int a;
	a = myfun(5);
	a = myfun(a+2);
	printf("\na = %d",a);
}
int myfun(int x)
{
	return x+1;
}
