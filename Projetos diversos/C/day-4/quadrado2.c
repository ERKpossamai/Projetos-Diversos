#include <stdio.h>

int main() {
    int num, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;

    printf("O quadrado de %d é %d.\n", num, quadrado);

    return 0;
}