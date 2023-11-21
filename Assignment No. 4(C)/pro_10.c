/* Q10.Scan age and gender from a user.Check if he or she is can marry or not.
using switch case . */

#include<stdio.h>
int main()
{
	int age;
	char gen;
	puts("\n Enter the Gender = ");
	scanf("%c",&gen);
	
	switch(gen)
	{
		case 'm' :
		case 'M' : puts("\n Enter your age = ");
		           scanf("%d",&age);
		           
		           if(age>=21)
		           {
		           	 printf("Can marry");
				   }
				   else
				   {
				   	 printf("Wait");
				   }
				   break;
				   
		case 'f' :
		case 'F' : puts("\n Enter your age = ");
		           scanf("%d",&age);
		           
		           if(age>=18)
		           {
		           	 printf(" Can marry");
				   }
				   else
				   {
				   	 printf("Wait");
				   }
				   break;
				   
		default : puts("Wrong choice");
	}
	return 0;
}
