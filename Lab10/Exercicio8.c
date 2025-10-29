#include <stdio.h>

int divisiveis_q8(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    int soma = divisiveis_q8(arr + 1, tam - 1, x);
    if (arr[0] % x == 0) {
        return arr[0] + soma;
    }
    return soma;
}

int main() {
    int meu_array[] = {3, 5, 6, 9, 10, 12, 15};
    int tamanho = sizeof(meu_array) / sizeof(meu_array[0]);
    int x = 3;
    
    int resultado = divisiveis_q8(meu_array, tamanho, x);
    printf("Q8: Soma dos numeros divisiveis por %d no array: %d\n", x, resultado);
    
    return 0;
}