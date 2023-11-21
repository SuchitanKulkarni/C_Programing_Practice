/* Q3.Scan 6 integers from user in an array.Copy this array in another array in reverse order.
[] notation */

#include<stdio.h>
int main()
{
	int num1[6];
	int i;
	int num2[6];
	
	puts("\nEnter the 6 integers in array:");
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&num1[i]);
	}
	for(i=0;i<6;i++)
	{
		num2[5-i] = num1[i];
	}
	for(i=0;i<6;i++)
	{
		printf("%d",num2[i]);
	}
	
	return 0;
}
