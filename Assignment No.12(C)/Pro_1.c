/* 1.Scan 8 integers from user in array.Print addition of only even integers in array. */

#include<stdio.h>
int main()
{
	int num[8];
	puts("\nEnter the 8 integers for array :");
	int i,sum =0;
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<8;i++)
	{
		if(num[i]%2==0)
		{
			sum = sum +num[i];
		}
	}
	
	printf("\nAddition = %d",sum);
	
	return 0;
}
