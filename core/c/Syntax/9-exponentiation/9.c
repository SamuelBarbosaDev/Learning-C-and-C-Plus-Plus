#include <stdio.h>

int exponentiation(int base, int exponent){
    if (exponent == 1){
        return base;
    }

    return base * exponentiation(base, exponent-1);
}

int main(void){
    int result = exponentiation(2, 4);
    printf("Exponentiation: %d\n", result);
    return 0;
}