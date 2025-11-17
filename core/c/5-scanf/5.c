#include <stdio.h>

int main(void){
    char name[30];

    printf("Digite seu nome:\n");
    scanf("%s", &name);
    printf("Seu nome é '%s'\n", name);
}