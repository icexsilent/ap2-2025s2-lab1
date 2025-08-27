#include <stdio.h>

void resultado(double media, int frequencia) {
    if (frequencia < 75) {
        printf("REPROVADO (frequencia %d%%)\n", frequencia);
    } else if (media >= 7.5) {
        printf("APROVADO (media %.2f, frequencia %d%%)\n", media, frequencia);
    } else {
        printf("DE EXAME (media %.2f, frequencia %d%%)\n", media, frequencia);
    }
}

int main(void) {
    double media;
    int frequencia;
    printf("Entre com a media (0.0 a 10.0): ");
    if (scanf("%lf", &media) != 1) return 0;
    printf("Entre com a frequencia (0 a 100): ");
    if (scanf("%d", &frequencia) != 1) return 0;
    resultado(media, frequencia);
    return 0;
}
