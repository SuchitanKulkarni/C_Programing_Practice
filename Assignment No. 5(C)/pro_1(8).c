/* Q.1.8.Scan a character from user.Check if it is capital or small alphabet. */

#include<stdio.h>
int main()
{
	char ch;
	puts("\nEnter the character :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("%c is capital",ch);
	}
	else
	{
		printf("%c is Small ",ch);
	}
	return 0;
}
