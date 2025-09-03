#include <stdio.h>

void intersecao(int A[], int tamA, int B[], int tamB) {
    printf("A ∩ B = { ");
    for(int i = 0; i < tamA; i++) {
        for(int j = 0; j < tamB; j++) {
            if(A[i] == B[j]) {
                printf("%d ", A[i]);
            }
        }
    }
    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int B[] = {4, 2, 9, 5};
    intersecao(A, 5, B, 4);

    int C[] = {3, 9, 11};
    int D[] = {2, 6, 1};
    intersecao(C, 3, D, 3);

    return 0;
}
