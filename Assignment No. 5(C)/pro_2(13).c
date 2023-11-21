/* Q.2.13
A
BC
DEF
GHIJ
KLMNO
*/

#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
	return 0;
	
}
