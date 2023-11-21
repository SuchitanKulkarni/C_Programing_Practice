/* Q11.Scan length and width of rectangle from user in main().
Define function rectangle() to find area and perimeter of rectangle.
Print both results back in main().(Not an array question) */

#include<stdio.h>
void rectangle(int x, int y,int *p,int *q);
int main()
{
	int len,wid;
	puts("\nEnter the length and width of rectangle :");
	scanf("%d%d",&len,&wid);
	int area,peri;
	rectangle(len,wid,&area,&peri);
	
	printf("\nArea = %d perimeter = %d",area,peri);
	
	return 0;
}
void rectangle(int x, int y,int *p,int *q)
{
	*p = x*y;
	*q = 2*(x+y);
}
