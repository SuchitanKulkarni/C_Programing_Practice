/* 15)Scan RollNumber,gender and age of a student.
If he or she enters gender other than m or f , ask him/her to re-enter gender.
If he/she enters age less than 7, ask him/her to re-enter the age.
After entering valid data, print that data. */

#include<stdio.h>

int main()
{
	char gen;
	int roll,age;
	printf("\nEnter roll no :");
	scanf("%d",&roll);
	
	while(5)
	{
		printf("\nEnter the gender (m or f) :");
		scanf("%c",&gen);
		scanf("%c",&gen);
		
		if(gen =='f' || gen =='m')
		{
			break;
		}
	}
	while(5)
	{
		printf("\nEnter the age :");
		scanf("%d",&age);
		
		if(age>7)
		{
			break;
		}
	}
	printf("\nRoll no. = %d",roll);
	
	if(gen=='m')
	{
		printf("\n Gender = Male");
	}
	else
	{
		printf("\nGender = Female");
	}
	printf("\nAge = %d",age);
	
	return 0;
	
}
