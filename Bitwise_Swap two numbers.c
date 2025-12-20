#include <stdio.h>

int main() {

    int A, B;
    scanf("%d %d", &A, &B);
    
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;

    printf("%d\n", A);
    printf("%d\n", B);
    
    return 0;
}