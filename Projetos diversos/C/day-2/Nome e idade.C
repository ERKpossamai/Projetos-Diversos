#include <stdio.h>

int main() {
    char nome[50]; // Declaração da variável para o nome
    int idade;     // Declaração da variável para a idade

    // Atribuição de valores
    snprintf(nome, sizeof(nome), "João"); // Atribuindo um nome
    idade = 25; // Atribuindo uma idade

    // Exibindo os valores na tela
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    return 0;
}