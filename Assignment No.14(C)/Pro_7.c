/* 7.Create a database of 8 students containing first_name,last_name,age,birthdate and hometown.
Use composition for birthdate.Apply following operations on database.
-search student by name
-print students who have born in specific month.(month number is the input from user)
-print students having specific surname(surname is the input from user) */

#include<stdio.h>

typedef struct date
{
	int day,mon,year;
}date;

typedef struct student
{
	char first_name[10];
	char last_name[10];
	int age;
	 date d;
	char hometown[10];
	
}student;

int main()
{
	student s[8];
	char p[10];
	int i;
	for(i=0;i<8;i++)
	{
		puts("\nEnter the first name :");
		gets(s[i].first_name);
		puts("\nEnter the last name :");
		gets(s[i].last_name);
		puts("\nEnter the age :");
		scanf("%d",&s[i].age);
		puts("\nEnter the birthday of student :");
		scanf("%d/%d/%d",&s[i].d.day,&s[i].d.mon,&s[i].d.year);
		puts("\nEnter the hometown :");
		gets(s[i].hometown);
		gets(s[i].hometown);
	}
	
	puts("\nEnter the name :");
	gets(p);
	
	if(strcmp(s[i].first_name,p)==0)
	{
		puts(s[i].first_name);
		puts(s[i].last_name);
		printf("%d/%d/%d",s[i].d.day,s[i].d.mon,s[i].d.year);
		puts(s[i].hometown);
		printf("%d",s[i].age);
	}
	
	int q;
	puts("\nEnter the month :");
	scanf("%d",&q);
	if(strcmp(s[i].d.mon,q)==0)
	{
		puts(s[i].first_name);
		puts(s[i].last_name);
		printf("%d/%d/%d",s[i].d.day,s[i].d.mon,s[i].d.year);
		puts(s[i].hometown);
		printf("%d",s[i].age);
	}
	char r[10];
	puts("\nEnter the last name :");
	gets(r);
	
	if(strcmp(s[i].last_name,r)==0)
	{
		puts(s[i].first_name);
		puts(s[i].last_name);
		printf("%d/%d/%d",s[i].d.day,s[i].d.mon,s[i].d.year);
		puts(s[i].hometown);
		printf("%d",s[i].age);
	}
	
	return 0;
}
