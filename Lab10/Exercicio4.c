#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int a = 54;
    int b = 24;
    int resultado = mdc(a, b);
    printf("Q4: O MDC de %d e %d e %d\n", a, b, resultado);

    a = 120;
    b = 36;
    resultado = mdc(a, b);
    printf("Q4: O MDC de %d e %d e %d\n", a, b, resultado);
    
    return 0;
}