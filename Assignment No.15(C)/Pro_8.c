/* 8.WAP to read data from file.Read whole file using getc() function. */
#include<stdio.h>
int main()
{
	char path [] = "D:\\C Programming\\Assignment No.15(C)\\Pro_8.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("Not connected");
	}
	
	puts("Connected");
	
	char ch;
	
	while(1)
	{
		ch = getc(fp);
		
		if(ch==EOF)
		{
			break;
		}
		printf("\nch = %c",ch);
	}
	
	fclose(fp);
}

