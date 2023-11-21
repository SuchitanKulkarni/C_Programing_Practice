/* Q14.Print only even integers between 0 and 21. */

#include<stdio.h>
int main()
{
	int x;
	
	for(x=0;  x<=21; x++)
	{
        if(x%2==0)
        {
        	printf("\n%d",x);
		}
	
	}
	return 0;
}

