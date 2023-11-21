/* Q8.Declare and initialize an array of 10 characters.Replace every occurrence of 'a' by 'e'.
Print the resultant array again.
pointer notation */

#include<stdio.h>
int main()
{
	char ch[10]={'a','s','d','f','t','a','a','e','p','a'};
	int i;
	char *p;
	p =ch;
	
	for(i=0;i<10;i++)
	{
		if(*(p+i)=='a')
		{
			*(p+i) = 'e';
		}
	}
	for(i=0;i<10;i++)
	{
		printf(" %c ",*(p+i));
	}
	
	return 0;
}
