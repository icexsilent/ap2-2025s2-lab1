#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio() {
    return (rand() % 100) + 1;
}

int ler() {
    int p;
    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &p);
    } while (p < 1 || p > 100);
    return p;
}

int main() {
    srand((unsigned)time(NULL));

    int secreto = sorteio();
    int palpite = ler();

    if (palpite == secreto) {
        printf("Parabens!!! Voce acertou!\n");
    } else {
        if (palpite < secreto) {
            printf("Voce chutou muito baixo! O valor correto e %d.\n", secreto);
        } else {
            printf("Voce chutou muito alto! O valor correto e %d.\n", secreto);
        }
    }

    return 0;
}
