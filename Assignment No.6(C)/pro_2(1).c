/* Q.2.1.Scan a range from user.Print addition of only even numbers in the range.(while) */

#include<stdio.h>
int main()
{
	int num1,num2,min,max,sum=0,i;
	puts("\nEnter the range : ");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		max=num1;
		min = num2;
	}
	else
	{
		max=num2;
		min=num1;
	}
	
	i=min;
	while(i<=max)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("sum = %d",sum);
	return 0;
}

