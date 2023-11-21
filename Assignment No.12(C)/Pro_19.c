/* 19.Declare an intialize an array of 8 integers.Scan a number from user and check 
if that number is present in the array or not. */

#include<stdio.h>
int main()
{
	int num[8]={1,2,3,4,5,6,7,8};
	int i,n;
	puts("\n Enter the number :");
	scanf("%d",&n);
	
	for(i=0;i<8;i++)
	{
		if(num[i]==n)
		{
			printf("\nPresent");
			break;
		}
	}
	
	return 0;
}
