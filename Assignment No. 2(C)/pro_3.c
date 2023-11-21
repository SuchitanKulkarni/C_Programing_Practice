//Q.3 Scan radius of a circle from user.Find area and circumference of circle.
//If area of circle is greater than 50,print how much it is greater than 50.
//If area is smaller than 50,print how much it is smalller than 50.
//Print every message properly.


#include<stdio.h>
int main()
{
	float radius;
	float  area,circum;
	printf("\n Enter the Radius of circle :");
	scanf("%f",&radius);
	
	area = 3.14*radius*radius;
	circum = 2*3.14*radius;
	
	printf("\n The Area is = %f \n The Circumference is = %f",area,circum);
	
	area>50?printf("\nThe Difference is = %f",area-50):printf("\nThe Difference is = %f",50 - area);
    
    return 0;
	
}
