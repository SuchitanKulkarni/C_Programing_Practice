/* 
15.Scan 6 citynames from user.Store them using 2-D array of characters.
Sort them in ascending order. */

#include<stdio.h>
#include<string.h>
int main()
{
	char cityname[6][20];
	puts("\nEnter the citynames :");
	int i;
	for(i=0;i<6;i++)
	{
		gets(&cityname[i][0]);
	}
	char temp [20];
	int res;
	int j;
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			res = strcmp(&cityname[i][0],&cityname[j][0]);
			
			if(res==1)
			{
			   strcpy(temp,&cityname[i][0]);
			   strcpy(&cityname[i][0],&cityname[j][0]);
			   strcpy(&cityname[j][0],temp);	
			}
		}
	}
	
	
	for(i=0;i<6;i++)
	{
		puts(&cityname[i][0]);
	}
	
	return 0;
}
