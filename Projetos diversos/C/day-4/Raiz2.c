#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    printf("Digite um número positivo: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        squareRoot = sqrt(number);
        printf("A raiz quadrada de %.2lf é %.2lf\n", number, squareRoot);
    }

    return 0;
}