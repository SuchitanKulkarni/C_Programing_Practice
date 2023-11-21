/* Q.1. 1.WAP to calculate net salary of an employee.Scan basic salary from user.
Add 10% medical allowance to basic salary.
Add 15% travelling allowance to basic salary.
Add 5% bonus to total(basic+medical+travelling) salary.
Print the final salary. */

#include<stdio.h>
int main()
{
	float basic_salary;
	float medical,travelling,bonus,total,final_salary;
	
	puts("\nEnter the basic salary : ");
	scanf("%f",&basic_salary);
	
	medical = (basic_salary*10)/(float)100;
	printf("\nMedical allowance = %f",medical);
	
	travelling = (basic_salary*15)/(float)100;
	printf("\nTravelling Allowance = %f",travelling);
	
    total = basic_salary + medical + travelling ;
    printf("\nTotal salary = %f",total);
    
    bonus = (total*5)/(float)100;
	printf("\nBonus of Total salary = %f",bonus);
	
	final_salary = total + bonus ;
	printf("\nFinal Salary = %f ",final_salary);
	
	return 0;
	
}
