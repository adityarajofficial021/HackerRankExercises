#include <stdio.h>
#include <math.h>

int main() {

   int num;
    scanf("%d", &num);
    if(num == 0)
        return 0;
         
    printf("<");
    for(int i =0; i<=num-1 ;++i){
        printf("%d",(int)pow(2,i));
        if(i != num-1)
        printf(" ");
    }
    printf(">");
    
    return 0;
}