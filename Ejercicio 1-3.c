/*En una Casa de Cabio necesitan construir un programa que dado como dato una cantidad expresada en dólares, convierta esa cantidad en pesos. Considere que 1 dolar = 11.96 pesos*/
#include <stdio.h>

int main()

{

  int dol = 0;
  int pes = 0;

  printf("Ingrese la cantidad en dólares. \n");
  scanf("%d", &dol);

  pes = dol * 11.69;

  printf("Este es el valor en pesos: \n");
  printf("%d", pes);

}
