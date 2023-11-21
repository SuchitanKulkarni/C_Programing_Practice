/*Q4.Scan a character from user.If user gives 'A',print "APPLE",
for 'B' print "BANANA",for 'C' print "CHERRY".
For any other character,print Some Other Fruit.Do this using switch */

#include<stdio.h>
int main()
{
	char ch;
	puts("\npress \n (A or a) = APPLE \n (B or b) = BANANA \n (C or c) = CHERRY");
	puts("\n Enter your the character = ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
		case 'a': printf("APPLE");
		          break;
		case 'B':
		case 'b': printf("BANANA");
		          break;
		case 'C':
		case 'c': printf("CHERRY");
		          break;
		default : printf("Wrong input");
	}
	
	return 0;
}

