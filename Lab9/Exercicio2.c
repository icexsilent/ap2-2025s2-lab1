#include <stdio.h>
#include "vetor_utils.h" 

void bubble_sort(int v[], int n) {
    int i, j; // 'i' é o contador de passadas, 'j' o contador interno

    // repetir (n – 1) vezes
    for (i = 0; i < n-1; i++) { // Loop 'i' de 0 a n-2 (total n-1 passadas)
        // percorrer o vetor
        for (j = 0; j < n-1; j++) {
            // se elemento atual for maior que o próximo
            if (v[j] > v[j+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, j, j+1);
            }
        }
        
        // Imprime o estado do vetor ao final de cada passada 'i'
        printf("Passada i = %d:", i);
        imprimir(v, n);
        // --------------------------
    }
}

int main(void) {
    int n = 5; 
    int v[5] = {5, 4, 3, 2, 1}; 

    // gerar_numeros(v, n);

    printf("Vetor Original:\n");
    imprimir(v, n);
    
    bubble_sort(v, n); 
    
    printf("\nVetor Ordenado (Padrao):\n");
    imprimir(v, n);
    
    return 0;
}