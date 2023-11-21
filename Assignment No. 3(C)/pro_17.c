/*Q17.Find the average marks of a student of 4 subjects.Decide his/her grades.
avg > 75 = distinction
avg > 60 = first class
avg > 40 = second class
avg <=40 = fail*/

#include<stdio.h>
int main()
{
	int maths,python,c,cpp;
	float avg;
	puts("Enter the marks of maths = ");
	scanf("%d",&maths);
	puts("Enter the marks of python = ");
	scanf("%d",&python);
	puts("Enter the marks of c = ");
	scanf("%d",&c);
	puts("Enter the marks of cpp = ");
	scanf("%d",&cpp);
	
	avg = (maths+python+c+cpp)/4.0;
	
	if(avg>75)
	{
		printf("Distinction");
	}
	else if(avg>60)
	{
		printf("First class");
	}
	else if(avg>40)
	{
		printf("Second class");
	}
	else
	{
		printf("Fail");
	}
	
	return 0;
}
