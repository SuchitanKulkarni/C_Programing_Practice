/* 2)
---------------------;
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	---- ;
	---- ;
	myfun(&p,&q);
	printf("%d-%d",a,b);  // 12 , 19
 	return 0;
}
void myfun(---- **m , ---- **n)
{
	---- ;
	---- ;
} */

#include<stdio.h>
void myfun(int **m , int **n);
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	int *p;
	int *q;
	p = &a;
	q = &b;
	myfun(&p,&q);
	printf("\n%d-%d",a,b);  // 12 , 19
 	return 0;
}
void myfun(int **m , int **n)
{
	**m = 12;
	**n = 19;
}
