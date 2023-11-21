/* Q.1.6
----A
---AB
--ABC
-ABCD
ABCDE
*/

#include<stdio.h>
int main()
{
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s=i;s<='D';s++)
		{
			printf("-");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
