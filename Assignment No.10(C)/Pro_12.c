/* 3)Keep scanning a number from user until he enters 0.Print addition of all the integers. */

#include<stdio.h>
int main()
{
	int i,sum =0;
	
	while(2<3)
	{
		puts("\nEnter the number :");
		scanf("%d",&i);
		
		if(i==0)
		{
			break;
		}
		sum = sum + i;
	}
	printf("\n Addition = %d",sum);
	
	return 0;
	
}


