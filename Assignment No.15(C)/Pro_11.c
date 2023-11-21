/* 11.WAP to scan only one string from user.Write that string in a file using fputc() function. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char path [] = "D:\\C Programming\\Assignment No.15(C)\\Pro_11.txt";
	
	FILE * fp;
	
	fp = fopen(path,"w");
	
	if(fp==NULL)
	{
		puts("not connected");
	}
	
	puts("connected");
	
	char str[100];
	
	gets(str);
	int i=0;
	
	while (str[i]!='\0')
	{
		fputc(str[i],fp);
		
		i++;
	}
	
	fclose(fp);
	
	return 0;
}
