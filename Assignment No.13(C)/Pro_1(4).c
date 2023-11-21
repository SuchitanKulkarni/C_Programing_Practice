/* Q.1.4.WAP print total number of days in a month using switch case. */
#include<stdio.h>
int main()
{
	int choice;
	puts("\nPress\n1. Jan, Mar, May, July, Aug, Oct, Dec\n2. Apr, June, Sept, Nov\n3. Feb");
	puts("\nEnter the choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : puts("\nMonth contains 31 days");
		          break;
		case 2 : puts("\nMonth contains 30 days");
		        break;
		case 3 : puts("\n Month contains 28 or 29 days");
		        break;
		        
		default : puts("\n Wrong input");
	}
	
	return 0;
}
