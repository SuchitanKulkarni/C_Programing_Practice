/* Q.2.4.Keep scanning a number from user until user enters 0.
User may enter positive and negative numbers.Print addition of only negative numbers. */

#include<stdio.h>
int main()
{
	int num,p=0;
	
	while(2<3)
	{
		puts("\nEnter the number :");
		scanf("%d",&num);
		
		if(num==0)
		{
			break;
		}
		if(num<0)
		{
		  p=p+num;	
		}
	}
	printf("\n sum is : %d",p);
	return 0;
}

