/* Q.1.7
----E
---DE
--CDE
-BCDE
ABCDE
*/

#include<stdio.h>
int main()
{
	char i,j,s;
	
	for(i='E';i>='A';i--)
	{
		for(s='A';s<=i-1;s++)
		{
			printf("-");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
