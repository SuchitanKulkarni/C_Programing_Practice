/* Q.1.16.For below main() function,scan a string from user.Print its length.
Do not declare any variable of your own.
int main()
{
	char * p;
} */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p;
	
	p = (char*)malloc(100*sizeof(char));
	
	puts("\nEnter the string :");
	gets(p);
	int i;
	
	i = strlen(p);
	
	printf("Length = %d",i);
	
	return 0;
}
