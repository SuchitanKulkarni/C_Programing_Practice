
//Q.7 Scan marks of 4 subjects of a student.If average of 4 subjects is greater than 75,
//print message DISTINCTION,else print message "STUDY MORE".


#include<stdio.h>
int main()
{
	int maths,python,C,CPP;
	float avg;
	
	printf("\n Enter the marks of maths,python,C,CPP :");
	scanf("%d%d%d%d",&maths,&python,&C,&CPP);
	
	avg = (maths+python+C+CPP)/4.0;
	printf("\nThe Average is = %f",avg);
	
	avg>75?printf("\n DISTINCION"):printf("\n ATUDY MORE");
	
	return 0;
	
	
	
}
