/* Q.1.21.Scan a matrix of 3*5 from user.Define a function printarray() to print this array.
(Refer notebook to see how to pass 2-D array to function.) */

#include<stdio.h>
void printfarray(int arr[3][5],int r,int c);
int main()
{
	int num[3][5];
	puts("\nEnter the elements for matrix 3*5 :");
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
	printfarray(num,3,5);
	
	return 0;
}
void printfarray(int arr[3][5],int r,int c)
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
