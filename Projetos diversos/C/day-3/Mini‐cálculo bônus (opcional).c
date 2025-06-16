#include <stdio.h>

int main() {
    int num1, num2;
    float media;

    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Cálculo da soma e média
    int soma = num1 + num2;
    media = (float)soma / 2;

    // Exibição dos resultados
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}