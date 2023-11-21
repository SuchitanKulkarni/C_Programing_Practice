/* 14.Scan 2 strings from user.Swap them.
(Done once in notebook.Refer that code).  */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
	
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	int i;
	char str3[10];
	
    strcpy(str3,str1);
    strcpy(str1,str2);
    strcpy(str2,str3);
    
    
	printf("%s ",str1);
	printf("%s",str2);
	
	return 0;
}

