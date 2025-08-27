#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(void) {
    return (rand() % 100) + 1;
}

int ler(void) {
    int p;
    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &p);
    } while (p < 1 || p > 100);
    return p;
}

int main(void) {
    srand((unsigned)time(NULL));

    int secreto = sorteio();
    int tentativas = 0;
    int palpite;

    do {
        palpite = ler();
        tentativas++;

        if (palpite == secreto) {
            printf("Parabens!!! Voce acertou em %d tentativa(s)!\n", tentativas);
        } else {
            if (palpite < secreto) {
                printf("Voce chutou muito baixo! Tente novamente.\n");
            } else {
                printf("Voce chutou muito alto! Tente novamente.\n");
            }
        }

    } while (palpite != secreto);

    return 0;
}
