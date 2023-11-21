/* 13)Scan marks of 3 subjects of a student from ClassTeacher.Print average of these 3 subjects.
Ask ClassTeacher if he/she wants to enter marks of one more student.If classTeacher enters 1,repeat the 
process else stop the process. */

#include<stdio.h>
int main()
{
	int choice;
	float maths,C,Python, avg;

    while(2<3)
  {
    
	puts("\n1.Maths\n2.C\n3.Python");	
	puts("\n Enter your marks : ");
	scanf("%f%f%f",&maths,&C,&Python);
	
	printf("\nMaths = %f",maths);
	printf("\nC = %f",C);
	printf("\nPython = %f",Python);
	
	avg = (maths+C+Python)/3 ;
	
	printf("\n Average = %f",avg);
	
	puts("\n Enter your choice :(enter 1 or 0) : ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		break;
	}
	
  } 
  
  return 0;

	
	return 0;
}
