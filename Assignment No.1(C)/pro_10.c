// Q.10 Scan length and width of rectangle from user. print area and perimeter of a reactangle.

#include<stdio.h>
int main ()
{
	int len , wid;
	printf("Enter the value of length and width : ");
	scanf("%d%d",&len,&wid);
	printf("The perimeter of the rectangle = %d",2*(len+wid));
	printf("\nThe area of rectangle = %d",len*wid);
	
	return 0;
}
