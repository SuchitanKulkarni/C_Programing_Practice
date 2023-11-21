/* 
14.Connect your file in read mode in your program.File should contain 6 lines.
After connection, read first 3 lines of file.Then again read your file from the beginning upto end. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char path[] = "D:\\C Programming\\Assignment No.15(C)\\Pro_14.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("not connected");
	}
	puts("connected");
	
	char str[100];
	fgets(str,100,fp);
   printf("%s",str);
    fgets(str,100,fp);
    printf("%s",str);
   	fgets(str,100,fp);
    printf("%s",str);
	
	fseek(fp,0,SEEK_SET);
	fgets(str,100,fp);	
	printf("%s",str);
	
	fclose(fp);
	
	return 0;
	
}
