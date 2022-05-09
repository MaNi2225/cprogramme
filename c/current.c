#include <stdio.h>
int main(){
    int previousReading = 0;
    int currentReading = 0;
    // get old reading
    printf("Enter your previous reading :");
    scanf("%d",&previousReading);
    // get current reading
    printf("Enter your current reading :");
    scanf("%d",&currentReading);
    // Validate: reading
    if(currentReading < previousReading){
        printf("Sorry!... currentReading can not be less than previousReading");
    }
    int consumptionUnits = 0;
    int totalBillAmount = 0;
    consumptionUnits = currentReading - previousReading;
    printf("Consumed Units: %d\n",consumptionUnits);
    // used less than 50 units, apply 2 rs per unit.
    if(consumptionUnits <= 50)
    {
        totalBillAmount = (consumptionUnits*2);
    }
    else
    {
        totalBillAmount = 50*2;
        consumptionUnits = consumptionUnits-50;
    }
    // Used more than 50, apply 5 rs per unit  
    if(consumptionUnits <= 50)
    {
        totalBillAmount = totalBillAmount+(consumptionUnits*5);
    }
    else
    {
        totalBillAmount = totalBillAmount+(50*5);
        consumptionUnits = consumptionUnits-50;
    }
    totalBillAmount = totalBillAmount+(consumptionUnits*7);

    printf("Total Bill Amount is %d Rupees.\n",totalBillAmount);
    return 0;
    
}