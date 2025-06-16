#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Prazer, %s! Você tem %d anos.\n", nome, idade);
    
    return 0;
}