/* 11.Scan 2 strings from user using gets().Print these 2 strings using puts(). */

#include<stdio.h>
int main()
{
	char str[10];
	char Str[10];
	puts("\nEnter the string:");
	gets(str);
	gets(Str);
	puts("\n Strings are :");
	puts(str);
	puts(Str);
	return 0;
}
