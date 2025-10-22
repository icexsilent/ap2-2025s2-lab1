#include <math.h>  // opcional, caso queira usar NAN ou outras funções
#include <stdio.h>

// calcula x^n (x e n são inteiros). Retorna double para suportar n < 0.
double potencia(int x, int n) {
    if (n == 0) return 1.0;
    if (n < 0) {
        // evita divisão por zero quando x == 0
        if (x == 0) return NAN;
        return 1.0 / potencia(x, -n);
    }
    if (n % 2 == 0) {
        double t = potencia(x, n / 2);
        return t * t;
    } else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int x, n;
    printf("Digite a base (x): ");
    scanf("%d", &x);
    printf("Digite o expoente (n): ");
    scanf("%d", &n);

    double resultado = potencia(x, n);
    if (isnan(resultado)) {
        printf("Erro: divisão por zero ao calcular %d^%d\n", x, n);
    } else {
        printf("%d^%d = %.2f\n", x, n, resultado);
    }

    return 0;
}