#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero;

    printf("Digite um número decimal (positivo ou negativo): ");
    scanf("%f", &numero);

    float valor_absoluto = fabs(numero);
    printf("O valor absoluto de %.2f é %.2f\n", numero, valor_absoluto);

    return 0;
}