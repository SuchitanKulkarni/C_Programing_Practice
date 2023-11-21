/* Q.1.24.Scan 4 citynames from user and store them in 2-D array of strings.
Print all the strings.(Refer notebook) */

#include<stdio.h>
int main()
{
	char cityname[4][20];
	
	int i,j;
	puts("\nEnter the 4 city Names :");
	for(i=0;i<4;i++)
	{
		gets(&cityname[i][0]);
	}
	
	for(i=0;i<4;i++)
	{
		puts(&cityname[i][0]);
	}
	
	return 0;
}
