/* 9. Scan length and width of a rectangle.Define function area() and perimeter() to 
find area and perimeter of a rectangle.Print results back in main(). */

#include<stdio.h>
int area(int l , int w);
int perimeter(int l,int w);

int main()
{
	int len,wid,res1,res2;
	
	puts("\nEnter the length and width of rectangle : ");
	scanf("%d%d",&len,&wid);
	
	res1 = area(len,wid);
	res2 = perimeter(len,wid);
	
	printf("\nArea = %d \nPerimeter = %d",res1,res2);
	
	return 0;
}
int area(int l, int w)
{
	return l*w;
}
int perimeter(int l,int w)
{
	return 2*(l+w);
}
