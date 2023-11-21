/* 14.Scan array of 8 integers from user.Define function replace() to Replace 
every occurence of 10 in array by 20.Print array */

#include<stdio.h>
void replace(int *p,int n);
int main()
{
	int num[8];
	puts("\nEnter the 8 integers :");
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}
	
	replace(num,8);
	
	return 0;
}
void replace(int *p,int n)
{
	int i;
	
	for(i=0;i<8;i++)
{

	
	if(*(p+i)==10)
	{
		*(p+i)=20;
	}
}
	for(i=0;i<8;i++)
	{
		printf(" %d ",*(p+i));
	}
}
