/* Q7.Scan a gender from user.If user enters m OR M , print MALE.
If user enters f OR F , print FEMALE.Print wrong input for any other character.
using switch case */

#include<stdio.h>
int main()
{
	char gen;
	puts("\npress \n (M or m) = MALE \n (F or f) = FEMALE");
	printf(" \n Enter your Gender = ");
	scanf("%c",&gen);
	
	switch(gen)
	{
		case 'm' :
		case 'M' : printf("\n MALE");
		           break;
		           
		case 'f' :
		case 'F' : printf("FEMALE");
		           break;
		           
		default : printf("Wrong input");
	}
	return 0;
}
