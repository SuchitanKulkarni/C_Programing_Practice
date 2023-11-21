/*Q7.Declare and initialize an array of 8 characters.Count how many times 'A' or 'a' is present in the array.
base address notation */

#include<stdio.h>
int main()
{
	char ch[8]={'a','s','d','f','g','h','i','o'};
	int i;
	int count =0;
	
	for(i=0;i<8;i++)
	{
		if(*(ch+i)=='A' || *(ch+i)=='a')
		{
			count++;
		}
	}
	printf("\nCount =%d",count);
	
	return 0;
}
