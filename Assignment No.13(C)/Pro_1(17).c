/* Q.1.17.Scan array of 8 integers from user.Find the minimum and maximum value from array.
Print their multiplication. */

#include<stdio.h>
int main()
{
	int arr[8];
	
	puts("\nEnter the 8 integers for array :");
	int i;
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max,min;
	
	max = arr[0];
	min = arr[0];
	
	for(i=0;i<8;i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
		if(min>arr[i])
		{
			min =arr[i];
		}
	}
	printf("\nMax = %d",max);
	printf("\nMin = %d",min);
	
	printf("\nMultiplication = %d",max*min);
	
	return 0;
}
