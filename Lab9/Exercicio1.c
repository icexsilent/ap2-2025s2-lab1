#include <stdio.h>
#include <stdbool.h>
#include "vetor_utils.h"

void bubble_sort_sentinela(int v[], int n) {
    int i, j; // 'i' é o contador de passadas, 'j' o contador interno
    bool troca; // 'troca' é a sentinela

    i = 0;
    troca = true;

    while (i < n - 1 && troca) {
        troca = false;
        
        // Loop interno para comparações
        for (j = 0; j < n - 1; j++) { 
            if (v[j] > v[j+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, j, j+1);
                troca = true; // Indica que uma troca ocorreu
            }
        }
        
        // Imprime o estado do vetor ao final de cada passada 'i'
        printf("Passada i = %d:", i);
        imprimir(v, n);
        // --------------------------
        
        i++; // Incrementa a passada
    }
}

int main(void) {
    int n = 5;
    int v[5] = {5, 4, 3, 2, 1}; 

    // gerar_numeros(v, n);

    printf("Vetor Original:\n");
    imprimir(v, n);
    
    bubble_sort_sentinela(v, n); 
    
    printf("\nVetor Ordenado (Sentinela):\n");
    imprimir(v, n);
    
    return 0;
}