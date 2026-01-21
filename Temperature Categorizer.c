#include <stdio.h>

int main() {
    
    int temp;
    scanf("%d", &temp);
    if(temp < 0){
        printf("Freezing");
    }
    else if(temp >=0 && temp <= 30){
        printf("Normal");
    }
    else if(temp > 30){
        printf("Hot");
    }
    return 0;
}
