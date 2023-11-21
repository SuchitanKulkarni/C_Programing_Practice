/* 10.WAP to count number of words in a file.*/

#include<stdio.h>
#include<stdlib.h>
int  main()
{
	char path [] = "D:\\C Programming\\Assignment No.15(C)\\Pro_8.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp ==NULL)
	{
		puts("not connected");
	}
	
	puts("connected");
	
	char ch;
	int count =0;
	
	while(1)
	{
		ch = getc(fp);
		
		if(ch==EOF)
		{
			break;
		}
		count++;
	}
	
	printf("count = %d",count);
	
	fclose(fp);
	
	return 0;
}
