#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Função para remover a quebra de linha do fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

void bubble_sort_sentinela(char *str) {
    int n = strlen(str);
    bool trocou; // Sentinela

    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                // Troca os caracteres
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                trocou = true;
            }
        }
        // Se nenhuma troca ocorreu nesta passada, a string está ordenada
        if (!trocou) {
            break;
        }
    }
}

int main() {
    char string[101]; // Limite de 100 caracteres + \0

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    remover_newline(string);

    bubble_sort_sentinela(string);

    printf("String ordenada: %s\n", string);
    return 0;
}
