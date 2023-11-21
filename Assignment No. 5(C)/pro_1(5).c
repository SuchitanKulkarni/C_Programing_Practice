/* Q.1.5.Print addition of 1 to 5 using loop.*/

#include<stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=1;i<=5;i++)
	{
		sum = sum+i;
	}
	printf("\n Sum = %d",sum);
	return 0;
}
