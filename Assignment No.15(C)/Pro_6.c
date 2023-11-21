/* 6.Scan a string from user.Define function convertupper() to convert whole string(only lowercase alphabets)
in uppercase format. */

#include<stdio.h>
void convertupper(char * p);
int main()
{
	char str[10];
	puts("\nEnter the string :");
	gets(str);
	
	convertupper(str);
	
	puts(str);
	
	return 0;
}
void convertupper(char * p)
{
	int i;
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i)-32;
		}
		
		i++;
	}
	
	
}
