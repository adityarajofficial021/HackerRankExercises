#include <stdio.h>

int area(int length, int width){
  return length * width;
}
int main(){
int length, width;
scanf("%d %d",&length,&width);
    
int res = length*width;
    
printf("The area is: %d units",res);
    
return 0;
}