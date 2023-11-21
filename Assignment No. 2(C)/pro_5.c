//Q.5 Scan a gender from user.If user enters m OR M , print male.
//If user enter f OR F, print female.Otherwise print wrong input

#include<stdio.h>
int main()
{
	char gen , male,female,max;
	
	printf("\n Enter the Gender of person :");
	scanf("%c",&gen);
	
    gen=='M'|| gen =='m' ? printf("\n male") : gen =='F'|| gen=='f' ? printf("\n Female") :printf("\n wrong input");
  
    
    return 0;
}
