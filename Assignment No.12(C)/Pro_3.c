/* 3.Scan a range from user.Print and count only prime numbers in range.*/

#include<stdio.h>
int isprime(int num1);
int main()
{
	int num1,num2,max,min,i,count=0,add;
	puts("\nEnter the range :");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max =num2;
		min = num1;
	}
	
    for(i=min;i<=max;i++)
    {
    	add = isprime(i);
    	if(add==1)
    	{
    		count++;
		}
	}
	printf("\ncount = %d",count);
	
	return 0;
	
}
int isprime(int num1)
{ 
    int i,count=0,flag =0;
	for(i=2;i<=num1/2;i++)
	{
		if(num1%i==0)
		{   
	     	flag = 1;
	     	return 0;
		}
	}

    if(flag==0)
      {
    	printf("\n%d",num1);
    	return 1;
	  }
	  
	 
	
}
	
	

