/* Q3.Scan a character from user.If user gives 'A',print "APPLE",
for 'B' print "BANANA",for 'C' print "CHERRY".
For any other character,print Some Other Fruit.Do this using if else.*/

#include<stdio.h>
int main ()
{
	char ch;
	puts("\n Enter the character = ");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='a')
	{
		puts("APPLE");
	}
	else if(ch=='B'|| ch=='b')
	{
		puts("BANANA");
	}
	else if(ch=='C'|| ch=='c')
	{
		puts("CHERRY");
	}
	else
	{
		puts("Some other Fruit");
	}
	
	return 0;
}

