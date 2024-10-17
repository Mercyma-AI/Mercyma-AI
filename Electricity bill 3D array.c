#include <stdio.h>

int main() {
    // 3D array to store unit ranges, charge per unit, and surcharge
    float charges[4][3] = {
        {199, 1.20, 0.00},
        {400, 1.50, 0.00},
        {600, 1.80, 0.00},
        {600, 2.00, 15.0},
    };
    
    int customerID, unitsConsumed;
    char customerName[50];
  
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
    float billAmount = 0, surcharge = 0;
    
    
    if (unitsConsumed <= 199) {
        billAmount = unitsConsumed * charges[0][1];
    } else if (unitsConsumed <= 399) {
        billAmount = unitsConsumed * charges[1][1];
    } else if (unitsConsumed <= 599) {
        billAmount = unitsConsumed * charges[2][1];
    } else {
        billAmount = unitsConsumed * charges[3][1];
        surcharge = (billAmount * charges[3][2]) / 100;
    }
    
    if (billAmount < 100) {
        billAmount = 100;
    }
   
    float totalAmount = billAmount + surcharge;
  
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charge per Unit: %.2f\n", unitsConsumed > 599 ? charges[3][1] : (unitsConsumed > 399 ? charges[2][1] : (unitsConsumed > 199 ? charges[1][1] : charges[0][1])));
    printf("Total Amount to Pay: %.2f Ksh\n", totalAmount);

    return 0;
}