/* Q.2.7.Scan a number from user.Print addition of all digits in given number.*/

#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	puts("\nEnter the number :");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("\n Sum = %d",sum);
	return 0;
}

