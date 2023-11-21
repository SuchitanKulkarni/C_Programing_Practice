/* 12.Scan array of n integers from user.Find the largest and smallest number from array.
(n integers means runtime memory allocation) */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p;
	
	puts("\nEnter the value :");
	scanf("%d",&n);
	 
	p = (int*)malloc(n*sizeof(int));
	int i;
	
	puts("\nEnter the  n numbers for array :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	int max,min;
	
	max = *(p+0);
	min = *(p+0);
	
	for(i=0;i<n;i++)
	{
		if(max < *(p+i))
		{
			max = *(p+i);
		}
		if(min >*(p+i))
		{
			min = *(p+i);
		}
	}
	
		printf("\nLargest value = %d",max);
		printf("\nSmallest value = %d",min);
		
		return 0;
}

