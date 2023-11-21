/* Q.1.2.WAP to check if given alphabet is vowel or consonant. */

#include<stdio.h>
int main()
{
	char ch;
	puts("\nEnter the character :");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("Given %c is a Vowel",ch);
	}
	else
	{
		if(ch>='B' && ch<='z' )
		{
			printf("Given %c is a Consonant",ch);
		}
	}
	
	return 0;
}

