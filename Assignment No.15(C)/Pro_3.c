/* 3.Scan 5 citynames from user in a 2-D array.Check if "delhi" is present in the list or not. */

#include<stdio.h>
#include<string.h>
int main()
{
	char cityname[5][30];
	
	puts("\nEnter the city :");
	
	int i;
	
	for(i=0;i<5;i++)
	{
		gets(&cityname[i][0]);
	}
	
	for(i=0;i<5;i++)
	{
		if(strcmp(&cityname[i][0],"delhi")==0)
		{
			puts("present");
			break;
		}
	}
	
	if(i==5)
	{
		puts("not present");
	}
	
	return 0;
}
