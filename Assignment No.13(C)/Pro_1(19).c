/* Q.1.19.Scan a string from user.Define function tolowercase() to convert given string in lowercase character. */

#include<stdio.h>
void tolowercase(char *p);
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	
	tolowercase(str);
	

	puts(str);
	return 0;
}
void tolowercase(char *p)
{
	int i;
	while(*(p+i)!='\0')
	{
		if((*(p+i)>='A') && (*(p+i)<='Z'))
		{
			*(p+i)=*(p+i)+32;
		}
		
		i++;
	}
}

