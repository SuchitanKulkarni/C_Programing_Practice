/*17.Scan array of 8 integers from user.Find the smallest value in array.*/

#include<stdio.h>
int main()
{
	int num[8];
	int min,i;
	puts("\nEnter the 8 integer for array :");
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<8;i++)
	{
		min=num[0];
		
		if(num[i]<min)
		{
			min = num[i];
		}
	}
	
	printf("Smallest = %d",min);
	
	return 0;
}

