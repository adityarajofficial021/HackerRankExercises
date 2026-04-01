#include <stdio.h>


int main(){
    int res, num;
    int product = 1;
    int sum = 0;
    scanf("%d", &num);
    
    while(num > 0){
        product = product *(num%10);
        sum = sum + (num%10);
        num = num/10;
    }
    res = product - sum;
    printf("%d", res);
        
    return 0;
        
}

    
    
    
    
    