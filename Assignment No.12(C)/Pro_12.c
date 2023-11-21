/* 12.Scan a string from user.Print number of characters in a string. */
#include<stdio.h>
int main()
{
	char str[10];
	int count=0,i;
	puts("\nEnter the string :");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	printf("\nCount = %d",i);
	
	return 0;
}
