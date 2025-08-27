#include <stdio.h>

void apresentar(double a, double b, double c) {
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        printf("Existe um triangulo com lados %.2f, %.2f, %.2f\n", a, b, c);
    } else {
        printf("Nao existe triangulo com lados %.2f, %.2f, %.2f\n", a, b, c);
    }
}

int main(void) {
    double a, b, c;

    printf("Digite os tres lados (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    apresentar(a, b, c);
    return 0;
}
