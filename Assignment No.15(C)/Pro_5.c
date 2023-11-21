/* 5.Scan a string from user.Define function countwords() to count number of words in a string. */

#include<stdio.h>
void countword(char * p);
int main()
{
	char str1[30];
	
	puts("\nEnter the string :");
	gets(str1);
	
	countword(&str1[0]);
	
	return 0;
}
void countword(char * p)
{
	int count =0;
	int i;
	
	while(*(p+i)!='\0')
	{
		count++;
		i++;
	}
	
	printf("count = %d",count);
}

