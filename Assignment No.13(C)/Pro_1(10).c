/* Q.1.10.WAP to print all prime numbers between 1 and n.
n is the input from user. */

#include<stdio.h>
int prime(int n);
int main()
{
	int n,i,res;
	puts("\nEnter the integer :");
	scanf("%d",&n);
	
   
  for(i=2;i<=n;i++)
  {
  	
  	res = prime(i);
   	 
   	 if(res==1)
   	 {
   	 	printf("%d ",i);
	 }
  }
	return 0;
}
int prime(int n)
{
	int flag=0;
	int i;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		
		{
			flag =1;
			return 0;
		}
	}
	if(flag ==0)
	{
		return 1;
	}
}
