/*Q2.Scan array of 8 integers from user.Sort it in ascending order.*/

#include<stdio.h>
int main()
{
	int num[8];
	puts("\nEnter the 8 integers for array :");
	int i;
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	int j;
	int temp;
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}

