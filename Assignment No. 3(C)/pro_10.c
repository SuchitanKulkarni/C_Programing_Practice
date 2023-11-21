//Q10.Scan a character from user.Print Apple if user gives a or A.
//Print Banana if user gives b or B.Print "Some other fruit" for any other character.

#include<stdio.h>
int main()
{
	char ch;
	puts("Enter the Character");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='a')
	{
		printf("Apple");
	}
	else if(ch=='B' || ch=='b')
	{
		printf("Banana");
	}
	else
	{
		printf("Some other Fruit");
	}
	
	return 0;
}
