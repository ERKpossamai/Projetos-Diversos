#include <stdio.h>

int main() {
    char inicial;
    float nota;

    printf("Digite a inicial do nome: ");
    scanf(" %c", &inicial);
    
    printf("Digite a nota final: ");
    scanf("%f", &nota);
    
    printf("Inicial: %c – Nota: %.1f\n", inicial, nota);

    return 0;
}