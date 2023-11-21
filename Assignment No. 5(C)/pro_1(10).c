/* Q.1.10.Scan 10 integers from user.Count positive and negative of them. */

#include<stdio.h>
int main ()
{
	int i,num;
	int positive=0,negative = 0;
	
	for(i=1;i<=10;i++)
	{
		puts("\nEnter the Integer :");
		scanf("%d",&num);
		
		if(num>0)
		{
			positive = positive + 1;
		}
		else if(num<0)
		{
			negative = negative + 1;
		}
		printf("\n");
	}
	printf("Positive = %d \n Negative = %d",positive,negative);
	return 0;
}

