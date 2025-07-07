#include <stdio.h>
#include <math.h>

int main() {
    int base = 4;
    int exponent = 2;
    double result = pow(base, exponent);
    
    printf("O resultado de %d elevado à %d é: %.0f\n", base, exponent, result);
    return 0;
}