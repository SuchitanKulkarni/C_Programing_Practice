/* 15.WAP to connect your file in r+  modes.Check if you can perform following operations.
-read whole file
-write new data into file
-change already present data in file.
Note your conclusions. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char path[] = "D:\\C Programming\\Assignment No.15(C)\\Pro_14.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r+");
	
	if(fp==NULL)
	{
		puts("not connected");
		exit(6);
		
	}
	puts("connected");
	
	char str[100];
	
/*	fgets(str,100,fp);
	printf("%s",str);
	*/
	
/*	gets(str);
	fputs(str,fp);
*/
  
  	
	fclose(fp);
	
	return 0;
	
}
