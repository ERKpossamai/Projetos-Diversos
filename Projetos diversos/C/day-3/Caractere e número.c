#include <stdio.h>

int main() {
    char caractere;
    int numero;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Você digitou: %c e %d\n", caractere, numero);

    return 0;
}