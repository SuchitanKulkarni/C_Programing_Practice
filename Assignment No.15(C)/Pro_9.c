/* 9.WAP to read whole file using fgets() function. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char path [] = "D:\\C Programming\\Assignment No.15(C)\\Pro_8.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("Not connected");
		exit(2);
	}
	puts("connected");
	
	char str[100];
	
	fgets(str,100,fp);
	
	printf("%s",str);
	
	fclose(fp);
	
	return 0;
	
}
