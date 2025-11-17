#include <stdio.h>

int main(void) {
    char char_name[30];

    printf("Qual é o seu nome? \n");
    fgets(char_name, sizeof(char_name), stdin);
    printf("O seu nome é: %s \n", char_name);
    
    return 0;
}