/* 11)Scan length and width of rectangle from user in main().Define functions to find its area and perimeter.Print both results back in main(). */

#include<stdio.h>
int area(int x,int y);
int perimeter(int x,int y);
int main()
{
	int len,wid,Area,Peri;
	puts("\nEnter the length and width : ");
	scanf("%d%d",&len,&wid);
	
    Area = area(len,wid);
	Peri = perimeter(len,wid);
	
	printf("\nArea = %d perimeter = %d",Area,Peri);
	
	return 0;
}
int area(int x, int y)
{
	return x*y;
}
int perimeter(int x, int y)
{
	return 2*(x+y);
}

