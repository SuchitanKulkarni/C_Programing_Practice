/* Print following pattern using while loop.

12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int i,j;
	
    i = 5;
    while(i>=1)
    {
    	j=1;
    	while(j<=i)
    	{
    		printf("%d",j);
    		j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
