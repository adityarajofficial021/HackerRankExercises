#include <stdio.h>

int distance(char ch1, char ch2)
{ 
    return ch2-ch1;
}
int main()
{
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    
    int d = distance(ch1, ch2);
    
    printf("The distance between %c and %c is %d", ch1, ch2, d);
    
    return 0;
}
