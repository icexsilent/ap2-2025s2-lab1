#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * potencia(x, n - 1);
}

int main() {
    int base = 2;
    int expoente = 5;
    int resultado = potencia(base, expoente);
    printf("Q1: %d elevado a %d = %d\n", base, expoente, resultado);
    
    base = 3;
    expoente = 4;
    resultado = potencia(base, expoente);
    printf("Q1: %d elevado a %d = %d\n", base, expoente, resultado);
    
    return 0;
}