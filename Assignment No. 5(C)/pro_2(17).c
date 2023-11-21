/* Q.2.17

AAAAA
*****
BBBBB
*****
CCCCC
*****
*/

#include<stdio.h>
int main()
{
	int i,j,s;
	char k='A';
	
	for(i=1;i<4;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c",k);
		}
		k++;
		printf("\n");
		
		for(s=1;s<=5;s++)
		{
			printf("*");
		}
		printf("\n");
		
		
	}
	return 0;
}
