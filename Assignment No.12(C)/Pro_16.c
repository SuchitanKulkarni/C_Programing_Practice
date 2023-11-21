/* 16.Scan array of 8 integers from user.Find the largest value from array.*/

#include<stdio.h>
int main()
{
	int num[8];
	puts("\nEnter the 8 integers for array :");
	int i,max;
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	max = num[0];
    for(i=0;i<8;i++)
    {
    	if(num[i]>max)
    	{
    		max = num[i];
		}
	}
	printf("\nlargest = %d",max);
	
	return 0;
	
	
	
	
}
