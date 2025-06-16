#include <stdio.h>

int main() {
    float altura, peso;

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);
    printf("Informe o peso (em kg): ");
    scanf("%f", &peso);

    printf("Altura: %.1f\n", altura);
    printf("Peso: %.1f\n", peso);

    return 0;
}