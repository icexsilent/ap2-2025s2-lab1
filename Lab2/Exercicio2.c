#include<stdio.h>

int main(){

    float peso, altura;

    printf("Diga seu peso em Kg e sua altura em metros:\n");
    scanf("%f %f", &peso, &altura);

    float imc = peso/(altura*altura);

    printf("O IMC de uma pessoa com peso %2.f kg e altura %2.f m é igual a %.2f.\n", peso, altura, imc);



}