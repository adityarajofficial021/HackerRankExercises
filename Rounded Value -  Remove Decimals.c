#include <stdio.h>

int main() {
    float num;
    int rounded;

    printf("Enter any real number: ");
    scanf("%f", &num);

    if (num >= 0)
        rounded = num + 0.5;
    else
        rounded = num - 0.5;

    printf("Rounded off integer = %d\n", rounded);

    return 0;
}
