/* Q.1.13.Scan a string from user.Copy this string in another string.(pointer notation)
Do not use string.h header file. */

#include<stdio.h>
int main()
{
	char str[100];
	char str2[100];
	char *p = str;
	char *q = str2;
	puts("\nEnter the string :");
	gets(p);
	
	int i;
	while(*(p+i)!='\0')
	{
		*(q+i)=*(p+i);
		i++;
		
	}
	*(q+i)='\0';
	
	puts(q);
	return 0;
}
