//Q8.Scan 3 numbers from user.Find the largest integer.(Using conditional operator)

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	int max;
	puts("Enter the 3 Numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	max = num1>num2 ? num1:num2 ;
	max = max>num3 ? max :num3 ;
	
	printf("The maximum number is = %d",max);
	
	return 0;
	
	
}
