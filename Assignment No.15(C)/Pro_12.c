/* 12.Keep scanning strings from user until user enters STOP.Write every string in a file. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char path [] = "D:\\C Programming\\Assignment No.15(C)\\Pro_12.txt";
	
	FILE *fp;
	
	fp =  fopen(path,"w");
	
	if(fp==NULL)
	{
		puts("not connected");
		exit(3);
	}
	
	puts("connected");
	
	char str[100];
	
	while(1)
	{
		gets(str);
		
		if(strcmp(str,"stop")==0)
		{
			break;
		}
		
		fputs(str,fp);
		putc('\n',fp);
	}
	
	fclose(fp);
	
	return 0;
}
