/* Q.1.15.For below main() function,scan 2 integers from user.Print their addition.
Do not declare any variable of your own.
int main()
{
	int *p;
} */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int * p;
	
	p =(int*)malloc(2*sizeof(int));
	
	puts("\nEnter the integers : ");
	int i,sum =0;
	for(i=0;i<2;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<2;i++)
	{
		sum = sum +*(p+i);
	}
	printf("\nAddition = %d",sum);
	
	return 0;
}
