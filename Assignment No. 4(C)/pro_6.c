/*  Q6.Scan a gender from user.If user enters m OR M , print MALE.
If user enters f OR F , print FEMALE.Print wrong input for any other character.
(Using if else) */

#include<stdio.h>
int main()
{
	char gen;
	puts("\n press \n (M or m) = MALE \n (F or f) = FEMALE");
	printf("\n Enter your Gender = ");
	scanf("%c",&gen);
	
	if(gen == 'M' || gen == 'm')
	{
		printf("MALE");
	}
	else if(gen == 'F' || gen == 'f')
	{
		printf("FEMALE");
	}
	else
	{
		printf("Wrong input");
	}
	return 0;
}
