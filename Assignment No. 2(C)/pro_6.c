//Q.6 Scan length and width of a rectangle from user.Check if it is square or rectangle.

#include<stdio.h>
int main()
{
	int len,wid ;
	printf("\n Enter the length and width of rectangle :");
	scanf("%d%d",&len,&wid);
	 
	len==wid?printf("\n It is a Square"):printf("\n It is the rectangle");
	
	return 0;
}
