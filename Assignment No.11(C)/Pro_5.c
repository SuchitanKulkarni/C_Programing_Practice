/* Q5.Declare and initialize an array of 8 integers.Check how many times 10 is present in the array.
pointer notation */

#include<stdio.h>
int main()
{
	int num[8]={2,3,4,5,6,10,8,9};
	int i,count =0;
	int *p;
	p = num;
	
	for(i=0;i<8;i++)
	{
		if(*(p+i)==10)
		{
			count++;
		}
	}
	printf("\nCount = %d",count);
	
	return 0;
	
}
