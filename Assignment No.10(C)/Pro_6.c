/* Q.Complete the following code.

int main()
{
	int a,b,ans;
	a = getvalue();  //getvalue() scans value for a
	b = getvalue();  //getvalue() scans value for b
	ans = add(a,b);
	printf("\nAnswer = %d",ans);
	return 0;
} */

#include<stdio.h>
int getvalue();
int add(int x,int y);
int main()
{
	int a,b,ans;
	a = getvalue();  //getvalue() scans value for a
	b = getvalue();  //getvalue() scans value for b
	ans = add(a,b);
	printf("\nAnswer = %d",ans);
	return 0;
}
int getvalue()
{
	int x;
	puts("\nEnter the value :");
	scanf("%d",&x);
	
	return x;
	
}
int add(int x,int y)
{
	return x+y;
}
