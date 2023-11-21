/* 15.Declare and initialize an array of 8 integers.Copy it in reverse order
in another array.Print both arrays. */
 
 #include<stdio.h>
 int main()
 {
 	int num[8]={1,2,3,4,5,6,7,8};
 	int num2[8];
 	int i;
 	for(i=0;i<8;i++)
 	{
 		num2[7-i] = num[i];
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d ",num2[i]);
	}
	
	return 0;
 }
