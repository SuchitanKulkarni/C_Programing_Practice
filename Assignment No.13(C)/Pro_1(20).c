/* Q.1.20.Scan a matrix 3*4.Scan another number from user.Check if that number is present in the array or not. */

#include<stdio.h>
int main()
{
	int num[3][4];
	int n;
	puts("\nEnter the elements for matrix 3*4 :");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	puts("\nEnter the random number :");
	scanf("%d",&n);
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(num[i][j]==n)
			{
				puts("\nPresent");
				count++;
				break;
			}
		}
		
		if(count==1)
		{
			break;
		}
	}
	
	return 0;
}

