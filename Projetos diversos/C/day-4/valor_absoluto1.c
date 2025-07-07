#include <stdio.h>
#include <math.h>

int main() {
    double number = -17.3;
    double absolute_value = fabs(number);
    
    printf("O valor absoluto de %.2f é %.2f\n", number, absolute_value);
    return 0;
}