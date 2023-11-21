/* 6.Create a database of 8 Employees containing name,salary and company_name.
Implement following operations on database.
-Search an employee by name.
-print all employees belonging to specific company.
-print all employees having salary greater than given number.
Try to apply switch case for these operations. */

#include<stdio.h>
#include<string.h>
typedef struct employee
{
	char name[20];
	int salary;
	char company[10];
}emp;

int main()
{
	emp s[8];
	int i;
	
	for(i=0;i<8;i++)
	{
		puts("\nEnter the name : ");
		gets(s[i].name);
		puts("\nEnter the salary :");
		scanf("%d",&s[i].salary);
		puts("\nEnter the Company :");
		gets(s[i].company);
		gets(s[i].company);
	}
	

	int choice ;
	char q[20];
	char r[20];
	int p;
	puts("\npress \n1.Search an employee by name.\n2.print all employees belonging to specific company.\n3.print all employees having salary greater than given number.");
	puts("\n Enter the digit (1-3) :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		        puts("\nEnter the name : ");
		        gets(q);
		        if(strcmp(s[i].name,q)==0)
            	{
             		puts(s[i].name);
	             	puts(s[i].company);
	             	printf("\n %d ",&s[i].salary);
             	}
             	
             	break;
             	
        case 2: 
                puts("\nEnter the company :");
                gets(r);
                	if(strcmp(s[i].company,"TCS")==0)
	                 {
	                	puts(s[i].name);
	                 	puts(s[i].company);
	                 	printf("\n%d",&s[i].salary);
                   	}
                   	
                   	break;
                   	
        case 3: 	
                 	puts("\nEnter the specific salary :");
                 	scanf("%d",&p);
	
                  	if(s[i].salary==p)
                	{
                		puts(s[i].name);
                		puts(s[i].company);
	                	printf("\n%d",&s[i].salary);
                 	} 
                 	
                 	break;
		        
		default : puts("Invalid input");
	
}

return 0;
}

