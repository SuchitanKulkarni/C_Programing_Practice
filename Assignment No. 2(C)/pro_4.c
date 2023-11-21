//Q.4 A customer has deposited 10000 Rs in bank in the form of Fixed Deposit for 3 years
//having rate of interest 5.00%.Find the total amount he will get after 3 years.
//If total amount he will receive is greater than 12000/-,then suggest him
//to invest them in mutual fund else suggest him to buy the gold.

#include<stdio.h>
int main()
{
	int principle,rate,time;
	float SI,Total;
	
	principle = 1000;
	rate = 5;
	time = 3;
	
	SI = (principle*rate*time)/100.0;
	Total = principle + SI;
	printf("\nThe Total amount is = %f",Total);
	
	Total>12000?printf("\n Invest in Mutual fund"):printf("\n Buy the Gold");
	
	return 0;
	
}
