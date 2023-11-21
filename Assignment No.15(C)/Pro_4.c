/* 4.Scan a string from user.Define your own function copy() to copy one string into another.
Do not use any inbuilt string function. */

#include<stdio.h>
void copy(char * p);
int main()
{
	char str[30];
	
	puts("\nEnter the string :");
	
	gets(str);
	copy(&str[0]);
	
	return 0;
}
void copy(char *p)
{
	char str1[30];
	int i=0;
	
	while(*(p+i)!='\0')
	{
		str1[i]= *(p+i);
		i++;
	}
	str1[i]='\0';
	
	puts(str1);
}

