/*Q20.Scan gender from user.
If gender is male,scan his age.
If age is equal to or above 25,scan his salary and print age and salary both.
If age is below 25,ask his birthyear and print.

If gender is female,ask her birthyear(means scan her birthyear).Find her current age.
If age is greater than or equal to 25,ask her salary and print.
If age is less than 25,ask her how much salary she wants.Scan it and print it.*/

#include<stdio.h>
int main()
{
	char gen;
	int age,birthyear;
	float salary;
	puts("Enter the Gender");
	scanf("%c",&gen);

	
	if( gen =='m' || gen == 'M')
	{
	    puts("Enter the Age");
	    scanf("%d",&age);
	    if(age>=25)
	    {
	    	puts("Enter the salary");
	        scanf("%f",&salary);
        	printf("salary = %f Age = %d",salary,age);
		}
		else if(age<25)
		{
			puts("Enter the Birthyear");
	        scanf("%d",&birthyear);
	        printf(" Birthyear = %d", birthyear);
		}
		
	}
	else if(gen == 'f' || gen == 'F')
	{
		puts("Enter the Birthyear");
	    scanf("%d",&birthyear);
	    age = 2021-birthyear;
	    printf("Age = %d",age);
	    if(age>=25)
	    {
	    	puts("Enter the salary");
	        scanf("%f",&salary);
	        printf("salary = %f",salary);
		}
		else
		{
			puts("How many salary you want = ");
			scanf("%f",&salary);
			printf("salary = %f",salary);
		}
	}
	else
	{
		puts("Wrong Input");
	}
	
	return 0;
}
