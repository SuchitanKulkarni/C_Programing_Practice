/* 13.Scan 6 citynames from user.Store them using 2-D array of characters.
Count how many times 'pune" is present in the array. */

#include<stdio.h>
#include<string.h>
int main()
{
	char cityname[6][20];
	int count =0;
	int i,j;
	puts("\nEnter the citynames :");
	
	for(i=0;i<6;i++)
	{
		gets(cityname[i]);
	}
	
	for(i=0;i<6;i++)
	{
		if(strcmp(cityname[i],"pune")==0)
     	{
	     	count++;
     	}
	}
	
	printf("\nCount = %d",count);
	
	return 0;
	
	
}

