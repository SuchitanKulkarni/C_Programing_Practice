/* Q8.Write a menu driven program to find following 
-area of circle
-area of rectangle
-circumference of circle
-perimeter of rectangle. */

#include<stdio.h>
int main()
{
	int r,len,wid,area,peri;
	float circum;
	int choice;
	puts("\npress \n 1 = Area of Circle \n 2 = Area of Rectangle \n 3 = Circumference of Circle  \n 4 = Perimeter of Rectangle");
	printf(" \n Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : puts("\n Enter the radius = ");
		         scanf("%d",&r);
		         area = 3.14*r*r;
		         printf("\nArea of Circle = %f",(float)area);
		         break;
		         
		case 2 : puts("\n Enter the length and width = ");
		         scanf("%d%d",&len,&wid);
		         area = len*wid;
		         printf("\nArea of Rectangle = %d",area);
		         break;
		         
		case 3 : puts("\n Enter the radius = ");
		        scanf("%d",&r);
		        circum = 3.14*2*r;
		        printf("\nCircumference of Circle = %f",circum);
		        break;
		        
		case 4 : puts("\n Enter the length and width = ");
		         scanf("%d%d",&len,&wid);
		         peri = 2*(len+wid);
		         printf("\n Perimeter of Rectangle = %d",peri);
		         break;
		         
		default : printf(" Wrong choice");
		
	}
	return 0;
	
}
