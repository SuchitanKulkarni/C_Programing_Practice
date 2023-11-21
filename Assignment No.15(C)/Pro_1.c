/* 1.WAP to scan 3 strings from user.Check if anyone of them is pune or not. */

#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][20];
	int i;
	int res;
	puts("\nEnter the 3 strings :");
	
	for(i=0;i<3;i++)
	{
		gets(&str[i][0]);
	}
	
	for(i=0;i<3;i++)
	{
	   
	   res = strcmp(&str[i][0],"pune");
	   
	   if(res==0)
	   {
	   	 puts("present");
	   	 break;
	   }
    }
	if(res !=0)
	{
		puts("\n not present");
	}
	
	return 0;
}
