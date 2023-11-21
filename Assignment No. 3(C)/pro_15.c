/*Q15.Scan a character from user.If it is small case alphabet,convert it into capital alphabet.*/

#include<stdio.h>
int main()
{
	char ch;
	puts("Enter the character");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		ch = ch-32;
	}
	printf("your character is = %c",ch);
	
	return 0;
}
