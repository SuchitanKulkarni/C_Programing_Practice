/*Q13.Scan a 3 digit number from user.Print each of its digit seperately.
e.g. = If user gives 528.
Output should be = 
8
2
5
(Each digit printed one below the other)*/

#include<stdio.h>
int main()
{
	int num;
	puts("Enter the 3 Digits number");
	scanf("%d",&num);
	
	printf("\n%d",num%10);
	num = num/10;
	printf("\n%d",num%10);
	num = num/10;
	printf("\n%d",num%10);
	
	return 0;
}
