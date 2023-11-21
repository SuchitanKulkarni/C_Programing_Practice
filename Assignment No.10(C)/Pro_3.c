/* 3)
---------------------;
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	--- = myfun(&b);
	printf("%d-%d",a,b);  // 12 , 19
 	return 0;
}
---- myfun(---- m )
{
	---- ;
	---- ;
} */

#include<stdio.h>
int myfun(int *m );
int main()
{
	int a = 10,b = 15;
	printf("%d-%d",a,b);  //10 , 15
	a = myfun(&b);
	printf("\n%d-%d",a,b);  // 12 , 19
 	return 0;
}
 int myfun(int *m )
{
	*m = 19 ;
	return 12;
}


