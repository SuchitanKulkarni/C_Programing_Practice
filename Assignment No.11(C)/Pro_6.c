/* Q6.Declare and initialize an array of 8 integers.Check if 15 is present in the array or not.
pointer notation */

#include<stdio.h>
int main()
{
	int num[8]={21,34,2,57,98,19,43,6};
	int i,*p,count = 0;
	p =num;
	
	for(i=0;i<8;i++)
	{
		if(*(p+i)==15)
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("\nPresent");
	}
	else
	{
		printf("\nNot Present");
	}
	
	return 0;
}


