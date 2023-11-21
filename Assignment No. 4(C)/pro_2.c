/* Q2.Scan a number from user.If user gives 1,print "ONE",if user gives 2,print "TWO",
for 3,print "THREE".If user gives some other number,print wrong input.
 Do it with using switch case*/
 
 #include<stdio.h>
 int main()
 {
 	int num;
 	puts("\n press \n 1=ONE \n 2=TWO \n 3=THREE");
 	puts("\n Enter your the interger = ");
 	scanf("%d",&num);
 	
 	switch(num)
 	{
 		case 1 : printf("ONE");
 		          break;
 		case 2 : printf("TWO");
 		          break;
 		case 3 : printf("THREE");
 		          break;
 		default : printf("Wrong input");
	}
	return 0;
 }
