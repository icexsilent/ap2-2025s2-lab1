#include <stdio.h>

long long int fib_q9_1(int n) {
    if (n == 1 || n == 2) {
        return 1LL;
    }
    return fib_q9_1(n - 1) + fib_q9_1(n - 2);
}

int main() {
    // n=46 ainda cabe em 'int' (na maioria dos sistemas)
    int n_limite = 46; 
    printf("Q9.1 (long long): O %d-esimo termo de Fibonacci e: %lld\n", n_limite, fib_q9_1(n_limite));

    // n=47 estoura 'int' (32 bits) 
    int n_overflow = 47; 
    printf("Q9.1 (long long): O %d-esimo termo de Fibonacci e: %lld\n", n_overflow, fib_q9_1(n_overflow));
    
    int n_grande = 50;
    printf("Q9.1 (long long): O %d-esimo termo de Fibonacci e: %lld\n", n_grande, fib_q9_1(n_grande));

    return 0;
}