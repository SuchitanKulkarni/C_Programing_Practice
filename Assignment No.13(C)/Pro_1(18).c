/* Q.1.18.Scan a string from user.Replace each vowel in string by '?'. */

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	
	int i;
	while(str[i]!='\0')
	{
		if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			str[i]='?';
		}
		
		i++;
	}
	
	puts(str);
	
	return 0;
}
