//program to calculate electricity bill
#include<stdio.h>
#include<math.h>
int main(){
	int unitsConsumed,customerID;
	char customerName;
	float chargePerUnit,totalBill,surcharge,totalAmount;
	
	printf("enter unitsConsumed:");
	scanf("%d", unitsConsumed);
	printf("enter customerID:");
	scanf("%d", customerID);
	printf("enter customerName:");
	scanf("%s", customerName);
	
	if( unitsConsumed < 200){
	   chargePerUnit = 1.20;
	}else if (unitsConsumed <= 400){
       chargePerUnit = 1.50;
	}else if (unitsConsumed <= 600){
	    chargePerUnit = 1.80;
	}else {chargePerUnit = 2.00;}

totalBill=unitsConsumed*chargePerUnit;

if (totalBill < 100){totalBill = 100;}

if (totalBill > 400){surcharge=totalBill*0.15;}



totalAmount=totalBill+surcharge;
return totalAmount;

     printf("customerID: %d\n", customerID);
     printf("customerName: %s\n", customerName);
     printf("unitsConsumed: %d\n", unitsConsumed);
     printf("chargePerUnit :%.2f\n", chargePerUnit);
     printf("totalAmount: %.2f\n", totalAmount);
     
     
     return 0;
 }	 
	 
	   