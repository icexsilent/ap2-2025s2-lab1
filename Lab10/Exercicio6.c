#include <stdio.h>

int divisiveis_q6(int arr[], int tam, int x) {
    if (tam == 0) {
        return 1;
    }
    if (arr[0] % x != 0) {
        return 0;
    }
    return divisiveis_q6(arr + 1, tam - 1, x);
}

int main() {
    int array1[] = {2, 4, 6, 8, 10};
    int tam1 = sizeof(array1) / sizeof(array1[0]);
    int x1 = 2;
    int res1 = divisiveis_q6(array1, tam1, x1);
    printf("Q6: Todos em [2, 4, 6, 8, 10] sao divisiveis por %d? %s\n", x1, res1 ? "true" : "false");

    int array2[] = {3, 6, 9, 10, 12};
    int tam2 = sizeof(array2) / sizeof(array2[0]);
    int x2 = 3;
    int res2 = divisiveis_q6(array2, tam2, x2);
    printf("Q6: Todos em [3, 6, 9, 10, 12] sao divisiveis por %d? %s\n", x2, res2 ? "true" : "false");

    return 0;
}