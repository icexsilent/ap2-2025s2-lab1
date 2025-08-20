#include <stdio.h>

int main() {

  float pi=3.141592;
  float esfera;
  printf("digite o diametro da esfera: ");
  scanf("%f",&esfera);
  float A = 4 * pi * (esfera*esfera);
  printf("a area da esfera é: %f\n",A);

}