/* 7.Scan array of 6 characters from user.Count how many times user has entered 'E'. */

#include<stdio.h>
int main()
{
	char ch[6];
	int count=0,i;
	puts("\nEnter the 6 character for array :");
	
	for(i=0;i<6;i++)
	{
		scanf("%c",&ch[i]);
	}
	for(i=0;i<6;i++)
	{
		if(ch[i]=='E')
		{
			count++;
		}
	}
	printf("\nCount = %d",count);
	
	return 0;
}

