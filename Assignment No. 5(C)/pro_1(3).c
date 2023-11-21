/* Q.1.3.Print only even numbers between 10 and 30. */

#include<stdio.h>
int main()
{
	int i;
	for(i=10;i<=30;i++)
	{
		if (i%2==0)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}
