/* 13.Connect your file with your program in such a way that its previous content will not be erased.
Write new content at the end of file . */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char path[] = "D:\\C Programming\\Assignment No.15(C)\\Pro_12.txt";
	
	FILE *fp;
	
	fp = fopen(path,"a");
	
	if(fp==NULL)
	{
		puts("connected");
		exit(2);
	}
	
	puts("connected");
	
	fputs("BEGINNING",fp);
	
	fclose(fp);
	
	return 0;
}
