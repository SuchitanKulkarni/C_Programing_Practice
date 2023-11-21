/* Q.2.16
-----*
----**
---***
--****
-*****
******
*/

#include<stdio.h>
int main()
{
	int i,j,s;
	
	for(i=6;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf("-");
		}
		for(j=i;j<=6;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
