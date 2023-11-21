/* 6)Keep scanning a number from user until user enters 0.Define function evenodd() 
to check if entered number is even or odd.(Here you have to call your function evenodd() 
everytime you scan a number from user) */

#include<stdio.h>
void evenodd(int x);
int main()
{
	int i;
	
	while(2<3)
	{
		puts("\nEnter the number :");
		scanf("%d",&i);
		
		evenodd(i);
		
		if(i==0)
		{
			break;
		}
		
		printf("\n\ni = %d",i);
	}
	
	return 0;
}
void evenodd(int x)
{
	if(x%2==0)
	{
		printf("\nEven");
	}
	else
	{
		printf("\nOdd");
	}
}

