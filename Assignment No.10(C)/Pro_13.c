/* 4)Keep scanning a number from user until he enters 0. Print addition of all positive numbers he entered. */

#include<stdio.h>
int main()
{
	int i,sum = 0;
	
	while(5)
	{
		puts("\nEnter the value :");
		scanf("%d",&i);
		
		if(i==0)
		{
			break;
		}
		
		if(i>0)
		{
			sum = sum+i;
		}
	}
	
	printf("\n Addition = %d",sum);
	
	return 0;
}

