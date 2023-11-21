/* 8.Scan a string from user.Check if it is pallindrome or not. */

#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	puts("\nEnter the string :");
	gets(str1);
	
	int i;
	while(str1[i]!='\0')
	{
		i++;
	}
	str2[i]='\0';
	i--;
	int j=0;
	while(i>=0)
	{
		str2[j]=str1[i];
		i--;
		j++;
	}
	
	printf("%s",str2);
	
	if(strcmp(str1,str2)==0)
	{
		puts("\n It is pallindrome");
	}
	else
	{
		puts("\nNot a pallindrome");
	}
	
	return 0;
}
