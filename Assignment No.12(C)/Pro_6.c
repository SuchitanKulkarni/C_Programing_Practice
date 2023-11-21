/* 6.Scan array of 6 fraction values from user.Store them in array.
Find average of all values. */

#include<stdio.h>
int main()
{
	float num[6];
	float avg;
	int i,sum =0;
	puts("\nENter the 6 fraction for array :");
	for (i=0;i<6;i++)
	{
		scanf("%f",&num[i]);
	}
	for(i=0;i<6;i++)
	{
		sum = sum + num[i] ;
		avg = sum/(float)6;
	}
	
	printf("\nAverage = %f",avg);
	
	return 0;
}
