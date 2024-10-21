//program to calculate simple interest
#include<stdio.h>
int main(){
	
	float principal,time,rate,interest;
	
	printf("enter principal amount:");
	scanf("%f",& principal);
	printf("enter time in years:");
	scanf("%f",& time);
	printf("enter rate of interest:");
	scanf("%f",& rate);
	interest = (principal*time*rate)/100;
	
	printf("simple interest is: %.2f",interest);
	
	return 0;
}