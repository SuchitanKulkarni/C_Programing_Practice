/* Q.1.4.Scan a range from user.Print even or odd for each number in the range.(using while) */

#include<stdio.h>
int main()
{
	int a,b,i;
	puts("\nEnter the Range : ");
	scanf("%d%d",&a,&b);
	
	int min,max;
	if(a>b)
	{
		min=b;
		max=a;
	}
	else
	{
		max=b;
		min=a;
	}
	
	i=min;
	while(i<=max)
	{
		if(i%2==0)
		{
			printf("\n%d = Even",i);
		}
		else
		{
			printf("\n%d = Odd",i);
		}
		i++;
	}
	return 0;
	
}
