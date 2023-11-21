/* 
----1
---12
--123
-1234
12345
*/

#include<stdio.h>
int main()
{
	int i,j,s;
	
	i=1;
	while(i<=5)
	{
		s=i;
		while(s<=4)
		{
			printf("-");
			s++;
		}
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

