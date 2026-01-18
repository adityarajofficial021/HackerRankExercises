#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    
    int temp = 1;   
    for(int i=1; temp<=num;i++){
        if((i*i)%3 == 0){
        }
        else{
        printf("%d ",i*i); 
        temp++;
        }
    }
    return 0;
}