/* Q9.Scan age and gender from a user.Check if he or she is can marry or not.
(using if else) */

#include<stdio.h>
int main()
{
	int age;
	char gen;
	puts("\n Enter your Gender = ");
	scanf("%c",&gen);

	
	if(gen =='M' || gen =='m')
	{   
	    puts("\n Enter your age = ");
	    scanf("%d",&age);
		if(age>=21)
		{
			puts("Can marry");
		}
		else
		{
			puts("Wait");
		}
	}
	else if(gen =='F'|| gen == 'f')
	{   
	    puts("\n Enter your age = ");
	    scanf("%d",&age);
		if(age>=18)
		{
			puts("Can marry");
		}
		else
		{
			puts("Wait");
		}
	}
	else
	{
		puts("Wrong choice");
	}
	return 0;
}
