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
    if ((currentReading<0) || (previousReading<0))
    {
        printf("Values for currentReading and previousReading can not be less than zero.\n");
        return 1;
    }

    if(currentReading < previousReading){
        printf("Sorry!... currentReading can not be less than previousReading");
    }
    int consumptionUnits = 0;
    int totalBillAmount = 0;
    consumptionUnits = currentReading - previousReading;
    printf("Consumed Units: %d\n",consumptionUnits);
    // 
    if ((consumptionUnits>=0) && (consumptionUnits<=50))
    {
        totalBillAmount = (consumptionUnits*2);
    }
    else if((consumptionUnits>50) && (consumptionUnits<=100))
    {
        totalBillAmount = 100+((consumptionUnits-50)*5);
    }
    else
    {
        totalBillAmount = 100+250+((consumptionUnits-100)*7);
    }

    printf("Total Bill Amount is %d Rupees.\n",totalBillAmount);
    return 0;
    
}