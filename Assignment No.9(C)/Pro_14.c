/* 14)Complete the following main() function.
int main()
{
	int  num1 , num2 ;
	int res;
	
	num1 = getdata();
	num2 = getdata();
	
	res = add(num1,num2);
	printf("\nAddition is %d",res);
} */

#include<stdio.h>
int getdata();
int add(int x, int y);
int main()
{
	int  num1 , num2 ;
	int res;
	
	num1 = getdata();
	num2 = getdata();
	
	res = add(num1,num2);
	printf("\nAddition is %d",res);
} 
int getdata()
{
	int x;
	puts("\n Enter data :");
	scanf("%d",&x);
	
	return x;
}
int add(int x, int y)
{
	return x+y;
}


