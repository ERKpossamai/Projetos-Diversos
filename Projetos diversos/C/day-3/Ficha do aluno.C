#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float nota;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Aluno: %s | Idade: %d | Nota final: %.1f\n", nome, idade, nota);

    return 0;
}
