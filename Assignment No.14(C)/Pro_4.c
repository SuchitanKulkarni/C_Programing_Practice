/* 4.Creeate a database of 8 students using structure.Database must contain name,age and 
hometown.Print all those students who belong to pune. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	char name[20];
	char hometown[20];
	int age;
	
}student;

int main()
{
	student T[8];
	int i;
	
	for(i=0;i<8;i++)
	{
		puts("\nEnter the name :");
		gets(T[i].name);
		puts("\nEnter the age :");
		scanf("%d",&T[i].age);
		puts("\nEnter the Hometown :");
		gets(T[i].hometown);
		gets(T[i].hometown);
		
	}
	
	for(i=0;i<8;i++)
	{
		if(strcmp(T[i].hometown,"pune")==0)
		{
			printf("\n%s",&T[i].name[0]);
		    printf("\n%d",T[i].age);
			printf("\n%s",&T[i].hometown[0]);
			printf("\n%s",&T[i].hometown[0]);
		}
	}
	return 0;
}

