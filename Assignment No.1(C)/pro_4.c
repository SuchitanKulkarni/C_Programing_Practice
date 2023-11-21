//Q.4 Scan marks of three subjects of a student . print their average . 


#include<stdio.h>
int main ()
{
	float maths,C,python,avg;
	printf("\nThe marks of the Maths,C,python :");

	scanf("%f%f%f",&maths,&C,&python);
	avg = (maths+C+python)/3;
	printf("\nThe Average value is = %f",avg);
	
	return 0;
	
		
}
