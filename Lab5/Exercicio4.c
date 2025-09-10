#include <stdio.h>

void maior_e_ocorrencias(int v[], int n, int *maior, int *ocorrencias) {
    int i;
    *maior = v[0];
    *ocorrencias = 1;

    for (i = 1; i < n; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
            *ocorrencias = 1;
        } else if (v[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}

int main(void) {
    int valores[9] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int n = 9;
    int maior, ocorrencias;

    maior_e_ocorrencias(valores, n, &maior, &ocorrencias);

    printf("Maior elemento = %d\n", maior);
    printf("Numero de ocorrencias = %d\n", ocorrencias);

    return 0;
}
