/* 
----5
---45
--345
-2345
12345
*/
	

#include<stdio.h>
int main()
{
	int i,j,s;
	
    i = 5;
    while(i>=1)
    {
    	s=1;
    	while(s<=i-1)
    	{
    		printf("-");
    		s++;
		}
		j=i;
		while(j<=5)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}


