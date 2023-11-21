/* Q.2.8
A
BA
CBA
DCBA
EDCBA
*/

#include<stdio.h>
int main()
{
	int i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
