#include <stdio.h>

int main() {
    
    int intnum;
    long longnum;
    char ch;
    float floatnum;
    double doublenum;
    
    
    scanf("%d %ld %c %f %lf", &intnum, &longnum, &ch, &floatnum, &doublenum);
    printf("%d\n", intnum);
    printf("%ld\n", longnum);
    printf("%c\n", ch);
    printf("%.3f\n", floatnum);
    printf("%.9lf\n", doublenum);
    
    
    return 0;
}
