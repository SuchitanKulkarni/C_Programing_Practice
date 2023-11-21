/* Q.1.12.Scan a string from user.Define function countword() to count number of words in string. */

#include<stdio.h>
int countword(char *p);
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	int count;
	count = countword(str);
	
	printf("\nWord = %d",count+1);
	
	return 0;
}
int countword(char *p)
{
	int i,count=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			count++;
		}
		
		i++;
	}
	
	return count;
}

