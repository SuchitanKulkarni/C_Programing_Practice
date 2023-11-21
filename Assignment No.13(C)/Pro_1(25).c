/* Q.1.25.Scan array of 8 integers from user.Sort it in ascending order. */

#include<stdio.h>
int main()
{
	int num[8];
	puts("\nEnter the 8 integers for array :");
	int i,j,x;
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(j=0;j<8;j++)
	{
		for(i=0;i<7;i++)
		{
			if(num[i]>num[i+1])
			{
				x=num[i];
				num[i]=num[i+1];
				num[i+1]=x;
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}

