/* 13.Scan a string from user.Count number of capital alphabets in string. */

#include<stdio.h>
int main()
{
	char str[10];
	puts("\nEnter the string : ");
	scanf("%s",str);
	int i,count=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
	{
			count++;
	}
		i++;
	}
	printf("\ncount = %d",count);
	
	return 0;
}
