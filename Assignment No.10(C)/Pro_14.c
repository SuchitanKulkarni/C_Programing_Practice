/* 5)Scan a number from user.Print addition of all digits in given number. */

#include<stdio.h>
int main()
{
	int i,sum = 0,rem;
	puts("\nEnter a number :");
	scanf("%d",&i);
	while(i>0)
	{
	
	rem = i%10;
	i = i/10;
	sum = sum +rem;
	
    }
    printf("\n Addition = %d",sum);
    return 0;
	
}

