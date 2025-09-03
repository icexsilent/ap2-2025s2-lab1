#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Preenche o vetor com valores aleatórios
void preencher(int vetor[], int tamanho) {
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 10 + 1; 
    }

    imprimir(vetor, tamanho);
    
    if (verificar(vetor, tamanho)) {
        printf("O vetor esta em ordem crescente (true)\n");
    } else {
        printf("O vetor NAO esta em ordem crescente (false)\n");
    }
}

// Imprime o vetor
void imprimir(int vetor[], int tamanho) {
    printf("Vetor: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Verifica se o vetor está em ordem crescente
int verificar(int vetor[], int tamanho) {
    for(int i = 0; i < tamanho - 1; i++) {
        if(vetor[i] > vetor[i + 1]) {
            return 0; // falso
        }
    }
    return 1; // verdadeiro
}

int main() {
    int vetor[10];
    int tamanho = 10;

    preencher(vetor, tamanho);

    return 0;
}
