#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int numero = 123;
    int resultado = soma_digitos(numero);
    printf("Q2: A soma dos digitos de %d e %d\n", numero, resultado); // Exemplo do PDF [cite: 16]

    numero = 9876;
    resultado = soma_digitos(numero);
    printf("Q2: A soma dos digitos de %d e %d\n", numero, resultado);
    
    return 0;
}