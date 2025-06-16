#include <stdio.h>

int main() {
    char string[100];

    printf("Digite uma seu nome: ");
    scanf("%s", string);

    printf("Prazer em conhece-lo: %s\n", string);

    return 0;
}