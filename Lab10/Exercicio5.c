#include <stdio.h>

double soma_array(double arr[], int tam) {
    if (tam == 0) {
        return 0.0;
    }
    return arr[0] + soma_array(arr + 1, tam - 1);
}

int main() {
    double meu_array[] = {1.5, 2.5, 3.0, 4.5, 10.0};
    int tamanho = sizeof(meu_array) / sizeof(meu_array[0]);
    
    double resultado = soma_array(meu_array, tamanho);
    printf("Q5: A soma do array e %.2f\n", resultado);
    
    return 0;
}