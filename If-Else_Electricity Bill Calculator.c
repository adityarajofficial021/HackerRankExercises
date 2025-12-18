#include <stdio.h>

int main() {

    int units;
    float bill;
    scanf("%d", &units);
    
    if( units < 0)
    {
        printf("Invalid Input!");
        return 0;
    }
    else if( units <= 100 )
    {
      bill = (units * 5);
    }
    else if( units <= 300)
    {
        bill =(500 + (units - 100)*7);
    }
    else{
        bill = (1900 + (units - 300)*10);
    }
    if(bill <= 1200)
        {
            bill = bill - bill*10.00/100.00;
        }
     printf("The electricity bill is: %.2f.", bill);
    return 0;
}