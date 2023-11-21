/* Q.1.14.Scan a string from user.Copy it in another string in reverse order.
([] notation) */

#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	
	puts("\nEnter the string :");
	gets(&str1[0]);
	
	int i;
	while(str1[i]!='\0')
	{
		i++;
	}
	str2[i] ='\0';
	i--;
	int j=0;
	while(i>=0)
	{
		str2[j]=str1[i];
		j++;
		i--;
	} 
	
	puts(str2);
	return 0;
}

