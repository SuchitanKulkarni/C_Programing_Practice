/* 2.Scan a string from user.Check if it is pallindrome or not. */

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
    char str1[20];
    
    puts("\n enter the string :");
    
    gets(str);
    
    int i,j;
    
    while(str[i]!='\0')
    {
    	i++;
	}
	
	str1[i] = '\0';
	i--;
	j=0;
	
	while(i>=0)
	{
		str1[j]=str[i];
		j++;
		i--;
	}
	
  int res ;
  
  res = strcmp(str,str1);
  
  if(res==0)
  {
  	puts("\n it is pallidrome");
  }
  else
  {
  	puts("\n not pallindrome");
  }
    
    return 0;
}
