/* 20.Scan array of 8 positive integers from user.If user gives negative value,
do not store it in array and give message to user,"Enter only positive values".
Keep scanning numbers until user enters 8 positive values.*/

#include<stdio.h>
int main()
{ 
   int num1[8];
   int i,count =0;
   int num;
	while(1)
	{
			puts("\nENter number:");
			scanf("%d",&num);
			
			if(num>0)
			{
				
			   num1[i]=num;
			   i++;
			   count++;
			}
		    if(num<0)
			{
				printf("\nEnter only positive values");
			}
			if(count>7)
			{
				break;
			}
		
    }
	
	for(i=0;i<8;i++)
	{
		printf("\n%u-%d",&num1[i],num1[i]);
	}	
	
	return 0;
}
