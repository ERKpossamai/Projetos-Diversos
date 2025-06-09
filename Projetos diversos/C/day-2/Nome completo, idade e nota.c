#include <stdio.h>

int main()
{
    char nome[100];
    int idade;
    float nota;

    // Solicitar entrada do usuário
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua nota: ");
    scanf("%f", &nota);

    // Mostrar mensagem formatada
    printf("Nome: %sIdade: %d\nNota: %.2f\n", nome, idade, nota);

    return 0;
}