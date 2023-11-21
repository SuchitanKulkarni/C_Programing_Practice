/* Q.2.3.Scan base and power from usr.WAP to find base^power. */

#include<stdio.h>
int main()
{
	int base,power,ans=1,i,num;
	puts("\nEnter the base and power : ");
	scanf("%d%d",&base,&power);
	
	while(i<=power)
	{
		ans = ans*base;
		i++;
	}	
	num=ans;
	printf("the base of power is :%d",num);
	return 0;
}

