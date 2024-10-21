//program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
	
	float principal,rate,time,compound_interest;
	int n;
	
	printf("enter principal amount:");
	scanf("%f",& principal);
	printf("enter annual interest rate in percentage:");
	scanf("%f",& rate);
	printf("enter time in years:");
	scanf("%f",& time);
	printf("enter number of times interest is compounded per year:");
	scanf("%d",& n);
	
	rate = rate/100;
	
	compound_interest = principal*pow((1+rate/n),n*time);
	
	printf("compound_interest is: %.2f", compound_interest);
	
	return 0;
}