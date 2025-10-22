#include <stdio.h>
#include <stdbool.h>
#include "vetor_utils.h" 

void selection_sort(int v[], int n) {
    int i, j, menor;
    
    // para cada posição do vetor (1º percurso)
    for (i = 0; i < n - 1; i++) {
        // inicializar o 'menor' com o *índice* da posição atual
        menor = i;
        
        // percorrer cada uma das próximas posições (2º percurso)
        for (j = i + 1; j < n; j++) { 
            // se o elemento deste percurso for menor que o 'menor' atual
            if (v[j] < v[menor]) { 
                menor = j; // atualiza o *índice* do menor
            }
        }
        
        // Se o índice 'menor' for diferente de 'i',
        // troca os elementos uma única vez
        if (i != menor) {
            trocar(v, i, menor);
        }
        
        // Imprime o estado do vetor ao final de cada passada 'i'
        printf("Passada i = %d:", i);
        imprimir(v, n);
        // --------------------------
    }
}

int main(void) {
    int n = 5;  // n = 5, conforme as tabelas do PDF
    // Inicializa o vetor exato das tabelas do PDF
    int v[5] = {5, 4, 3, 2, 1}; 

    // gerar_numeros(v, n); 

    printf("Vetor Original:\n");
    imprimir(v, n);
    
    selection_sort(v, n); // A função agora imprime a cada passo
    
    printf("\nVetor Ordenado (Selection):\n");
    imprimir(v, n);
    
    return 0;
}