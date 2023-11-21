/* 
5.Scan array of 10 integers from user.Copy it in another array in reverse order. */

#include<stdio.h>
int main()
{
	int num1[10];
	int num2[10];
	int i;
	puts("\nENter the 10 integers for array :");
	
	for (i=0;i<10;i++)
	{
		scanf("%d",&num1[i]);
	}
	for(i=0;i<10;i++)
	{
		num2[9-i]=num1[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",num2[i]);
	}
	
	return 0;
}

