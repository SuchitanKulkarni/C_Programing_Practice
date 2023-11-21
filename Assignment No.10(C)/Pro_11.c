/*     1
      121
     12321
    1234321
   123454321
   
*/

#include<stdio.h>
int main()
{
	int i,j,k,s,a;
	
    i = 1;
    while(i<=5)
    {
    	s=i;
    	while(s<=4)
    	{
    		printf(" ");
    		s++;
		}
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
		k=i-1;
		while(k>=1)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
		i++;
		
	}
	

	return 0;
}
