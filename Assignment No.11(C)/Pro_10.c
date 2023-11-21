/* Q10.Scan 2 arrays of 5 integers from user.Perform indexwise addition of elements of 2 arrays into third array.
e.g.
first array  = 2  5  3  12   8
second array = 3  2  6   4  21
-------------------------------
Result array = 5  7  9  16  29
[] notation */

#include<stdio.h>
int main()
{
	int num1[5]={2,5,3,12,8};
	int num2[5]={3,2,6,4,21};
	int i;
	int result[5];
	
	for(i=0;i<5;i++)
	{
		result[i]=num1[i]+num2[i];
		
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",result[i]);
	}
	
	return 0;
	
}
