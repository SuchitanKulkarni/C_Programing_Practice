/*Q16.Scan details of 2 rectangles.Compare their areas.*/

#include<stdio.h>
int main()
{
	int len1,wid1,len2,wid2;
	int area1,area2;
	puts("Enter the values of length and width for first rectangle = ");
	scanf("%d%d",&len1,&wid1);
	puts("Enter the values of length and width for second rectangle = ");
	scanf("%d%d",&len2,&wid2);
	
	area1 = (len1*wid1);
	area2 = (len2*wid2);
	
	if(area1>area2)
	{
		printf("area1 = %d > area2 = %d",area1,area2);
	}
	else if(area1<area2)
	{
		printf("area1 = %d < area2 = %d",area1,area2);
	}
	else
	{
		printf("area1 = %d == area2 = %d",area1,area2);
	}
	return 0;

}
