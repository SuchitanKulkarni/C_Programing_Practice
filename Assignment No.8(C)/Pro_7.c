/* 7. Scan length and width of a rectangle.Define function area to find area of rectangle.
Print result back in main(). */

#include<stdio.h>
int area(int l,int w);

int main()
{
	int len,wid,res;
	
	puts("\nEnter the length and width of rectangle : ");
	scanf("%d%d",&len,&wid);
	
	res = area(len,wid);
	
	printf("\nArea of rectangle = %d",res);
}
int area(int l,int w)
{
	return l*w;
}
