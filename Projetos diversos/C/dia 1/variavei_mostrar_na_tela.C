#include <stdio.h>

int main() {
    int idade;
    float altura;
    char inicial_nome;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial_nome);

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial do nome: %c\n", inicial_nome);

    return 0;
}