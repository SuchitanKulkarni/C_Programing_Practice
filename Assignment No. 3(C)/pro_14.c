/* Q14.Scan a character from user.Check if it is capital alphabet or not.*/

#include<stdio.h>
int main()
{
	char ch;
	puts("Enter the Character");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Capital Alphabet");
	}
	else
	{
		puts("Small Alphabet");
	}
	return 0;
}
