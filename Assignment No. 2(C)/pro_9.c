//Q.9 Scan salary of a person.If salary is greater than 10000, add 5% bonus in the salary.
//Else add 8% bonus in the salary.Print final salary.

#include<stdio.h>
int main()
{
	float salary;
	
	printf("\n Enter the salary of person :");
	scanf("%f",&salary);
	
	printf("\n salary of person is = %f", salary);
	
	salary>1000?printf("\n The salary will be = %f",(salary*5)/100):printf("\n the salary will be = %f",(salary*5)/100);
	
	return 0 ;
}
