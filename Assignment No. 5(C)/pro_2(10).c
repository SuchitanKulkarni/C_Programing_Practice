/* Q.2.10
AAAAA
BBBB
CCC
DD
E
*/

#include<stdio.h>
int main()
{
	int i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j=i;j<='E';j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
