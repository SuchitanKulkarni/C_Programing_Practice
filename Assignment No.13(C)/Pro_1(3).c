/* Q.1.3.WAP to input all sides of a triangle and check whether triangle is valid or not. */

#include<stdio.h>
int main()
{
	int side1,side2,side3;
	puts("\nEnter the 3 sides of triangle :");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if(side1+side2>side3)
	{
		printf("\nGiven triangle is valid ");
	}
	else
	{
		puts("\nGiven triangle is invalid");
	}
	
	return 0;
}

