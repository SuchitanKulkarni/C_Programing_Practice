/* Q4.Declare and initialize an array of 8 integers.Print addition of only even numbers in array.
base address notation */

#include<stdio.h>
int main()
{
	int num[8]={3,4,5,6,7,8,1,2};
	int i,sum = 0;
	
	for(i=0;i<8;i++)
	{
		if(*(num+i)%2==0)
		{
			sum =sum + *(num+i);
		}
	}
	printf("\nAddition = %d",sum);
	
	return 0;
}
