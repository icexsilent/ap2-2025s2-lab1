#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LEN 101

// Função de comparação para o qsort
// Compara duas strings lexicograficamente
int comparar_strings(const void *a, const void *b) {
    // A ordem lexicográfica padrão (strcmp) já trata
    // maiúsculas como vindo antes de minúsculas (pela tabela ASCII)
    return strcmp(*(const char **)a, *(const char **)b);
}

// Função para remover a quebra de linha do fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    int n;
    // Usamos um array de ponteiros para facilitar o qsort
    char *strings[MAX_STRINGS];
    char buffer[MAX_STRINGS][MAX_LEN]; // Buffer para armazenar as strings

    printf("Digite a quantidade de strings (n): ");
    scanf("%d", &n);
    getchar(); // Consome o \n

    printf("Digite as %d strings (uma por linha):\n", n);
    for (int i = 0; i < n; i++) {
        fgets(buffer[i], MAX_LEN, stdin);
        remover_newline(buffer[i]);
        strings[i] = buffer[i]; // Ponteiro aponta para a string no buffer
    }

    // Ordena o array de ponteiros
    qsort(strings, n, sizeof(char *), comparar_strings);

    printf("\n--- Strings ordenadas ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}