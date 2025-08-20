#include <stdio.h>

int main() {

  int C;
  printf("digite uma temperatura em celcius: ");
  scanf("%d",&C);
  float F =C * 1.8 + 32;
  printf("a temperatura %d em celcius é o mesmo que %2.f Fahrenheit\n\n",C,F);


}