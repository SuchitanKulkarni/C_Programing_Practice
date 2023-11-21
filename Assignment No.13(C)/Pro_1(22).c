/* Q.1.22.Declare an array of 2*3 in main().Define function scanarray() to scan array elements.
Define function printarray() to print array elements.
(refere notebook to check how to pass 2-D array to function) */

#include<stdio.h>
void scanarray(int arr[2][3],int r,int c);
void printarray(int arr[2][3],int r,int c);
int main()
{
	int num[2][3]= {{1,2,3},
	                {4,5,6}
					};
					
    scanarray(num,2,3);
    printarray(num,2,3);
    
    return 0;
}
void scanarray(int arr[2][3],int r,int c)
{
	int i,j;
	puts("\nEnter the elements for matrix 2*3 :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
void printarray(int arr[2][3],int r,int c)
{
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		
		printf("\n");
	}
}
