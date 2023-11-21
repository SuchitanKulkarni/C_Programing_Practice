/* Q18.Scan age and gender of a candidate.Check if he/she is able to marry or not.
(male,age limit = 21)
(female, age lilmit = 18)*/

#include<stdio.h>
int main()
{
	int age;
	char gender;
	puts("Enter the Gender");
	scanf("%c",&gender);
	
	if(gender=='M' || gender=='m')
	{   
	    puts("Enter the Age");
    	scanf("%d",&age);
		if(age>=21)
		{
		    
			printf("Able to Marry");
		}
		else
		{
			printf("Not able to Marry");
		}
	}
	else if(gender == 'f' || gender == 'F')
	{   
	    puts("Enter the Age");
    	scanf("%d",&age);
		if(age>=18)
		{
			printf("Able to Marry");
		}
	}
	else
	{
		printf("Wrong Input");
	}
	return 0;
}
