/*Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros números naturales.*/

#include <stdio.h>

int main()

{
  int N = 0;
  int imp = 1;
  int c = 1;
  printf("Ingrese un número N natural.\n");
  scanf("%d", &N);
  if(N <= 0)
  {
    printf("Los números naturales son positivos. :)");
  }
  else if(N > 0)
  {
    for(c = 1; c <= N; c++)
    {
      imp = imp * c;
    }
    printf("Este es el resultado: %d", imp);
  }
  return 0;
}
