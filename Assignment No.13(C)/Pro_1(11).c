/*Q.1.11.Scan a string from user.Count number of words in a string.(Pointer notation) */

#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	p =str;
	puts("\nEnter the string :");
	gets(p);
	int i,count=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			count++;
		}
		
		i++;
	}
	
	printf("\nWords = %d",count+1);
	
	return 0;
	
}

