#include <stdio.h>

int *numberPoint;
int number = 74;

int main(void){
    numberPoint = &number;
    
    printf("Pointer: %d\n", *numberPoint);
    
    return 0;
}