/* Q1.Scan an array of 8 integers from user.Print this array in reverse order.
[] notation */

#include<stdio.h>
int main()
{
	int num[8];
	int i;
	
	puts("\nEnter the 8 integers for array : ");
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<8;i++)
	{
		printf(" %d ",num[7-i]);
	}
	
	return 0;
}
