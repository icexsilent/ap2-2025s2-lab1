#include <stdio.h>

int fib_q9(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib_q9(n - 1) + fib_q9(n - 2);
}

int main() {
    int n = 8;
    int resultado = fib_q9(n);
    printf("Q9: O %d-esimo termo de Fibonacci e: %d\n", n, resultado); // Sequência: 1, 1, 2, 3, 5, 8, 13, 21... [cite: 54]

    n = 10;
    resultado = fib_q9(n);
    printf("Q9: O %d-esimo termo de Fibonacci e: %d\n", n, resultado);
    
    return 0;
}