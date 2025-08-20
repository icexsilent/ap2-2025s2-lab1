#include <stdio.h>
#include <math.h> 

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Digite o comprimento do primeiro cateto:\n");
    scanf("%f", &cateto1);

    printf("Digite o comprimento do segundo cateto:\n");
    scanf("%f", &cateto2);

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.\n",
           cateto1, cateto2, hipotenusa);

    return 0;
}
