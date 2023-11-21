/* 18.Scan a string from user.Count number of vowels in string.*/

#include<stdio.h>
int main()
{
	char str[10];
	puts("\n enter the string :");
	scanf("%s",str);
	int i,count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("\nCount = %d",count);
	
	return 0;
}
