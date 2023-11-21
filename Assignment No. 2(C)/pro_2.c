//Q.2 Scan length and width of a rectangle , find area and perimeter of rectangle.
//If area is greater than 100, print message "Big rectangle" else print message 
//"Small Rectangle"


#include<stdio.h>
int main ()
{
	float len ,wid ;
	float area,perimeter;
	printf("\n Enter the length and width of rectangle :");
	scanf("%f%f",&len,&wid);
	
	area = len*wid;
	perimeter = 2*(len+wid);

	printf("\n The Area is = %f \n The perimeter is = %f ",area,perimeter);
	
	area>100?printf("\n Big rectangle"):printf("\n Small rectangle");
	
	return 0;
}
