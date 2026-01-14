#include <stdio.h>

int main() {

    int n, a;
    scanf("%d %d", &n, &a);
    
    for(int i=1; i<=n; ++i){
        printf("%d ",a+(i-1)*a);
    }
        
    return 0;
}