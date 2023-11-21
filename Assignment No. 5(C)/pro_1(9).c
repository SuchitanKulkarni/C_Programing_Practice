/* Q.1.9.Scan a character from user.Convert it in uppercase if it is lower case. */

#include<stdio.h>
int main()
{
	char ch;
	puts("\nEnter the character :");
	scanf("%c",&ch);
	
	if(ch<='A' && ch>='Z')
	{
		printf("%c is capital",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		ch = ch-32;
		printf(" Your character = %c",ch);
	}
	else
	{
		printf("Wrong input");
	}
	return 0;
	
}
