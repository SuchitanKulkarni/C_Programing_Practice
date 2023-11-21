// Q3.Scan a number from user.Print correct input if it is multiple of 3 or 5.
//Otherwise print wrong input.

#include<stdio.h>
int main()
{
	int num;
	puts("Enter the Number");
	scanf("%d",&num);
	
	if(num%3==0)
	{
		puts("Correct Input");
    }
    else if(num%5==0)
    {
        puts("Correct Input");
	}
	else
	{
		puts("Wrong Input");
	}
      
	
	return 0;
	
}

