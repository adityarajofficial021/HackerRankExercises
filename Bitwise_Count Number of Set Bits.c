#include <stdio.h>

int main() {
    int num;
    int count = 0;
    scanf("%d", &num);
    
    if((num & 1) == 1){
        ++count;
    }
    for(int i =1; i<= 3; ++i){
        num = num >>1;
        if((num & 1) == 1){
            ++count;
        }
    }
    printf("%d", count);
    return 0;
}