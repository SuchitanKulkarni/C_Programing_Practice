/*Q1.Scan 2 strings from user.Compare them and print their relation.
(strcmp) */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	
	int res;
	res = strcmp(str1,str2);
	
	if(res==0)
	{
		puts("\nBoth are equal");
	}
    if(res==-1)
	{
		printf("%s < %s ",str1,str2);
	}
	if(res==1)
	{
		printf("%s > %s",str1,str2);
	}

	return 0;
}

