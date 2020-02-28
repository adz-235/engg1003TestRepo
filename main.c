#include <stdio.h>

int main(){
    float x;
    float y;
    printf("enter an integer: ");
    scanf("%f", &x); //
    y=(x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
