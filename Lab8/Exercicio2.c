#include <stdio.h>
#include <string.h>

#define MAX_NOMES 100
#define MAX_LEN 101

// Função para remover a quebra de linha do fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    char nomes[MAX_NOMES][MAX_LEN];
    char nome_atual[MAX_LEN];
    int n, i, j, qtd_nomes = 0;

    printf("Quantos nomes deseja inserir? ");
    scanf("%d", &n);
    getchar(); // Consome o \n deixado pelo scanf

    for (i = 0; i < n; i++) {
        printf("Digite o %dº nome: ", i + 1);
        fgets(nome_atual, sizeof(nome_atual), stdin);
        remover_newline(nome_atual);

        // Encontra a posição correta para inserção
        int pos = 0;
        while (pos < qtd_nomes && strcmp(nomes[pos], nome_atual) < 0) {
            pos++;
        }

        // Desloca os elementos para a direita para abrir espaço
        for (j = qtd_nomes; j > pos; j--) {
            strcpy(nomes[j], nomes[j - 1]);
        }

        // Insere o nome na posição correta
        strcpy(nomes[pos], nome_atual);
        qtd_nomes++;
    }

    printf("\n--- Nomes ordenados alfabeticamente ---\n");
    for (i = 0; i < qtd_nomes; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
