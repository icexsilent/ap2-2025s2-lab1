#include <stdio.h>

void frac(float num, int *inteiro, float *fracao) {
    *inteiro = (int) num;       // parte inteira
    *fracao = num - *inteiro;   // parte fracionária
}

int main(void) {
    float numero, parte_fracionaria;
    int parte_inteira;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    frac(numero, &parte_inteira, &parte_fracionaria);

    printf("Parte inteira = %d\n", parte_inteira);
    printf("Parte fracionaria = %.3f\n", parte_fracionaria);

    return 0;
}
