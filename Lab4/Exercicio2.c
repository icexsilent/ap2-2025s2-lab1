#include <stdio.h>

#define TAM 5

void inverterVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        int temp = v[i];
        v[i] = v[tamanho - 1 - i];
        v[tamanho - 1 - i] = temp;
    }
}

int main() {
    int V[TAM] = {4, 9, 10, 8, 6};

    inverterVetor(V, TAM);

    printf("Vetor invertido: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}