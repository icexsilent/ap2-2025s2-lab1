#include <stdio.h>

void min_max(int v[], int n, int *min, int *max) {
    int i;
    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main(void) {
    int valores[8] = {12, 5, 20, -3, 7, 15, 0, 9};
    int n = 8;
    int min, max;

    min_max(valores, n, &min, &max);

    printf("Valor minimo = %d\n", min);
    printf("Valor maximo = %d\n", max);

    return 0;
}
