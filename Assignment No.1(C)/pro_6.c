//Q.5 Scan temperture from user in celcius. convert it in farhenheit.

#include<stdio.h>
int main()
{
	float temp,far;
	printf("Enter the temperature in celcius :");
	scanf("%f",&temp);
	far = (temp*9)/5+32;
	printf("The Farhenheit = %f",far);
	
	return 0;
	
}
