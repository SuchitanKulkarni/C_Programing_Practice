/* 10.Complete the code for following main() function.Do not change the main() function. 

	int main()
	{
		int a,b;
		if(  add(a,b) > 10)
		{
			printf("Addition is greater than 10");
		}
		else
		{
			printf("\nAddition is not greater than 10");
		}
		return 0;
	} */
	
#include<stdio.h>
int add(int x,int y);

    int main()
	{
	
		int a,b;
		
		puts("\nEnter the two integers : ");
		scanf("%d%d",&a,&b);
		
		if(  add(a,b) > 10)
		{
			printf("Addition is greater than 10");
		}
		else
		{
			printf("\nAddition is not greater than 10");
		}
		return 0;
	}
int add(int x,int y)
{
	return x+y;
}
