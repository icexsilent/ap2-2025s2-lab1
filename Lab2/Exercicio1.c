#include<stdio.h>

int main(){
    int num1, num2;
    printf("Diga os dois numeros: ");
    scanf("%d %d",&num1,&num2);

    int soma = num1+num2;
    int sub = num1-num2;
    float div = num1/num2;
    float mult = num1*num2;

    printf("A soma dos dois numeros é: %d\n", soma);
    printf("A subtracao é: %d\n", sub);
    printf("A divisao é: %2.f\n", div);
    printf("A multiplicacao é: %2.f\n", mult);
    
}