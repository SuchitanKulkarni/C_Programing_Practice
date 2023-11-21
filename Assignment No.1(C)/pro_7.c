//Q.7 wap to scan any character from user and print its ASCII values.
//check ASCII values of { 'A','a',Z','z','\n','\t','0','1','9'}

#include<stdio.h>
int main()
{
  char one,two,three,four,five,six,seven,eight,nine;
	
	one = 'A';
	two ='a';
	three = 'Z';
	four = 'z';
	five = '\n';
	six = '\t';
	seven = '0';
	eight = '1';
	nine = '9';
	
	printf("\nThe value of A = %d",one);
	printf("\nThe value of a = %d",two);
	printf("\nThe value of Z = %d",three);
	printf("\nThe value of z = %d",four);
	printf("\nThe value of \n = %d",five);	
	printf("\nThe value of \t = %d",six);
	printf("\nThe value of 0 = %d",seven);
	printf("\nThe value of 1 = %d",eight);
	printf("\nThe value of 9 = %d",nine);
  
	return 0;
}
