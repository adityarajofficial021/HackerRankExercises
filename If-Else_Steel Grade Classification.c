#include <stdio.h>

int main() {
    float hardness, carbon, strength;
    scanf("%f %f %f", &hardness, &carbon, &strength);
    
    if((hardness > 50) && (carbon < 0.7) && (strength > 5600))
    {
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.\n");
    }
    else if((hardness > 50) && (carbon < 0.7))
    {
        printf("The grade of the steel is: 9\n");
        printf("Two conditions met.\n");  
    }
    else if((carbon < 0.7) && (strength > 5600))
    {
        printf("The grade of the steel is: 8\n");
        printf("Two conditions met.\n");
    }
    else if((hardness > 50) && (strength > 5600))
    {
        printf("The grade of the steel is: 7\n");
        printf("Two conditions met.\n");
    }
    else if((hardness > 50) || (carbon < 0.7) || (strength > 5600))
    {
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    else
    {
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.\n"); 
    }
    return 0;
}