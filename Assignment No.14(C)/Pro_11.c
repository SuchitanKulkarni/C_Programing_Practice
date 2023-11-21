/* 11.Scan 2 integers from user.Print their addition.
Then keep asking user if he wants to perform addition again.If user enters 1,
repeat the operation.This process should repeat again and again until user enters 0
when u ask him if he wants to perform addition again or not. */

#include<stdio.h>
int main()
{
	
	while(1)
	{
		int num1,num2;
    	puts("\nEnter the two integers :");
	    scanf("%d%d",&num1,&num2);
	    
	    printf("\nAddition = %d",num1+num2);
	    
	    int n;
	    puts("\nenter the digit 1 if want to continue or enter zero:");
	    scanf("%d",&n);
	    
	    if(n>=2)
	    {
	    	puts("\nEnter the valid input");
	    	puts("\nenter the digit 1 if want to continue or enter zero:");
	        scanf("%d",&n);
		}
	    if(n==0)
	    {
	    	break;
		}
	
	}
	
	printf("\nAfter the loop");
	
	return 0;
}

