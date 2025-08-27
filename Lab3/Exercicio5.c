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
    int tentativas = 0, max_tentativas = 5;
    int palpite;
    int acertou = 0;

    while (tentativas < max_tentativas && acertou == 0) {
        palpite = ler();
        tentativas++;

        if (palpite == secreto) {
            printf("Parabens!!! Voce acertou em %d tentativa(s)!\n", tentativas);
            acertou = 1;
        } else {
            if (palpite < secreto) {
                printf("Voce chutou muito baixo!\n");
            } else {
                printf("Voce chutou muito alto!\n");
            }
        }
    }

    if (acertou == 0) {
        printf("Voce excedeu o numero maximo de tentativas. O numero era %d.\n", secreto);
    }

    return 0;
}
