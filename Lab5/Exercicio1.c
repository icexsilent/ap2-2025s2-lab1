#include <stdio.h>

int dobro(int *a, int *b) {
    *a = *a * 2;   
    *b = *b * 2;   
    return *a + *b;
}

int main(void) {
    int A, B, soma;

    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    soma = dobro(&A, &B);

    printf("A dobrado = %d\n", A);
    printf("B dobrado = %d\n", B);
    printf("Soma dos dobrados = %d\n", soma);

    return 0;
}