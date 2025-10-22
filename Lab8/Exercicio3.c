#include <stdio.h>
#include <string.h>

#define MAX_NOMES 100
#define MAX_LEN 101

// Função para remover a quebra de linha do fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

void selection_sort_por_tamanho(char nomes[][MAX_LEN], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Encontra o índice da string de menor tamanho
        int indice_menor = i;
        for (int j = i + 1; j < n; j++) {
            if (strlen(nomes[j]) < strlen(nomes[indice_menor])) {
                indice_menor = j;
            }
        }

        // Troca a string da posição 'i' com a de menor tamanho
        if (indice_menor != i) {
            char temp[MAX_LEN];
            strcpy(temp, nomes[i]);
            strcpy(nomes[i], nomes[indice_menor]);
            strcpy(nomes[indice_menor], temp);
        }
    }
}

int main() {
    char nomes[MAX_NOMES][MAX_LEN];
    int n;

    printf("Quantos nomes deseja inserir? ");
    scanf("%d", &n);
    getchar(); // Consome o \n deixado pelo scanf

    printf("Digite os %d nomes:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(nomes[i], MAX_LEN, stdin);
        remover_newline(nomes[i]);
    }

    selection_sort_por_tamanho(nomes, n);

    printf("\n--- Nomes ordenados por tamanho ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}