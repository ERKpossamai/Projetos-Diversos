#include <stdio.h>
#include <math.h>

int main() {
    double base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%lf", &base);
    
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);
    
    resultado = pow(base, expoente);
    
    printf("Resultado: %.2lf\n", resultado);
    
    return 0;
}