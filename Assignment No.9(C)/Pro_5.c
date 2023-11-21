/* 5)Keep scanning a number from user until user enters 0.Print addition of all integers. */

#include<stdio.h>
int main()
{
	int i;
	
	while(2<3)
	{
		puts("\nEnter the number :");
		scanf("%d",&i);
		
		if(i==0)
		{
			break;
		}
		
		printf("\ni = %d",i);
	}
	
	return 0;
}
