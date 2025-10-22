#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRADAS 100
#define MAX_LEN 101

// Estrutura para agrupar as três strings de uma entrada
typedef struct {
    char string1[MAX_LEN];
    char string2[MAX_LEN];
    char string3[MAX_LEN];
} Entrada;

// Função de comparação para o qsort
int comparar_entradas(const void *a, const void *b) {
    const Entrada *entradaA = (const Entrada *)a;
    const Entrada *entradaB = (const Entrada *)b;

    // 1. Compara pela string1
    int cmp1 = strcmp(entradaA->string1, entradaB->string1);
    if (cmp1 != 0) {
        return cmp1; // Retorna se forem diferentes
    }

    // 2. Se string1 for igual, compara pela string2
    int cmp2 = strcmp(entradaA->string2, entradaB->string2);
    if (cmp2 != 0) {
        return cmp2; // Retorna se forem diferentes
    }

    // 3. Se string1 e string2 forem iguais, compara pela string3
    return strcmp(entradaA->string3, entradaB->string3);
}

// Função para remover a quebra de linha do fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    Entrada entradas[MAX_ENTRADAS];
    int n;

    printf("Digite a quantidade de entradas (n): ");
    scanf("%d", &n);
    getchar(); // Consome o \n

    printf("Digite as %d entradas (3 linhas por entrada):\n", n);
    for (int i = 0; i < n; i++) {
        // printf("Entrada %d, String 1: ", i + 1);
        fgets(entradas[i].string1, MAX_LEN, stdin);
        remover_newline(entradas[i].string1);

        // printf("Entrada %d, String 2: ", i + 1);
        fgets(entradas[i].string2, MAX_LEN, stdin);
        remover_newline(entradas[i].string2);

        // printf("Entrada %d, String 3: ", i + 1);
        fgets(entradas[i].string3, MAX_LEN, stdin);
        remover_newline(entradas[i].string3);
    }

    // Ordena o array de structs usando a função de comparação
    qsort(entradas, n, sizeof(Entrada), comparar_entradas);

    printf("\n--- Saida ordenada ---\n");
    for (int i = 0; i < n; i++) {
        // Imprime no formato "s1, s2, s3"
        printf("%s, %s, %s\n",
               entradas[i].string1,
               entradas[i].string2,
               entradas[i].string3);
    }

    return 0;
}