/* Q9.Scan array of 8 characters from user.Count how many capital alphabets user has given.
pointer notation */

#include<stdio.h>
int main()
{
	char ch[8];
	int i,count =0;
	char *p;
	p =ch;
	
	puts("\nEnter the 8 characters for array:");
	
	for(i=0;i<8;i++)
	{
		scanf("%c",(p+i));
	}
	for(i=0;i<8;i++)
	{
		if((*(p+i)>='A') && (*(p+i)<='Z'))
		{
			count++;
		}
	}
	printf("\nCount = %d",count);
	
	return 0;
}

