#include <stdio.h>
// #include <stdbool.h> 
#include "vetor_utils.h" 

void insertion_sort(int v[], int n) {
    int i, j, aux; // 'aux' guarda o elemento a ser inserido

    // para cada posição do vetor (1o percurso)
    for (i = 1; i < n; i++) {
        // guardar elemento
        aux = v[i];
        j = i - 1;

        // percorrer no sentido inverso enquanto não chegar ao início
        // e o elemento da esquerda (v[j]) for maior que o 'aux'
        while (j >= 0 && v[j] > aux) {
            // deslocar elemento da esquerda para a direita
            v[j+1] = v[j];
            j--; // continuar procurando
        }
        
        // inserir 'aux' (elemento) na posição correta (j+1)
        v[j+1] = aux;
        
        // --- ADIÇÃO CONFORME PDF ---
        // Imprime o estado do vetor ao final de cada passada 'i'
        printf("Passada i = %d:", i);
        imprimir(v, n);
        // --------------------------
    }
}

int main(void) {
    int n = 5;  // n = 5, 
    int v[5] = {5, 4, 3, 2, 1}; 

    // gerar_numeros(v, n);

    printf("Vetor Original:\n");
    imprimir(v, n);
    
    insertion_sort(v, n); // A função agora imprime a cada passo
    
    printf("\nVetor Ordenado (Insertion):\n");
    imprimir(v, n);
    
    return 0;
}