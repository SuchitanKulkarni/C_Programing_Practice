/* Q.1.23.Scan 3 strings from user in three different character arrays.Print length of each
string.Check if any of the string starts with character A. */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	char str3[100];
	int l1,l2,l3;
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	puts("\nEnter the Third string :");
	gets(str3);
	
	l1 = strlen(str1);
	l2 = strlen(str2);
	l3 = strlen(str3);
	
	printf("\nLength of string 1 :%d",l1);
	printf("\nLength of string 2 :%d",l2);
	printf("\nLength of string 3 :%d",l3);
	
	if(str1[0]=='A')
	{
		puts("\nA is Present in first string");
	}
	if(str2[0]=='A')
	{
		puts("\nA is Present in second string");
	}
	if(str3[0]=='A')
	{
		puts("\nA is Present in third string");
	}
	
	return 0;
	
	
}
