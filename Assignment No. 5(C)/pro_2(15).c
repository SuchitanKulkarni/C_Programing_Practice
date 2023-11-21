/* Q.2.15
----5
---54
--543
-5432
54321
*/

#include<stdio.h>
int main()
{
	int i,s,j;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf("-");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
	return 0;
}
