/* 4)
---------------------;
---------------------;
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	myfun(&a,&b);
	printf("%d-%d",a,b);  // 12 , 19
 	return 0;
}
---- myfun(---- m , ---- n )
{
	yourfun(&m,&n);
}
void yourfun(---- p,---- q)
{
	---- ;
	---- ;
} */

#include<stdio.h>
void yourfun(int **p,int **q);
void myfun(int *m , int *n );
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	myfun(&a,&b);
	printf("\n%d-%d",a,b);  // 12 , 19
 	return 0;
}
void myfun(int *m , int *n )
{

	yourfun(&m,&n);
}
void yourfun(int **p,int **q)
{
	**p = 12;
	**q = 19;
}
