/*Construya un diagrama de flujo que lea 100 números naturales y cuente
cuántos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main()

{

  float N = 0;
  int c = 0;
  int pos = 0;
  int neg = 0;
  int nul = 0;
  
    for(c = 0; c < 100; c++)
    {
      printf("Ingrese el número %d \n", c + 1);
      scanf("%f", &N);

      if(N == 0)
      {
        nul = nul +1;
      }
      else if (N > 0)
      {
        pos = pos + 1;
      }
      else if(N < 0)
      {
        neg = neg + 1;
      }
    }

  printf("La cantidad de números positivos es : %d \n", pos);
  printf("La cantidad de números nulos es: %d \n", nul);
  printf("La cantidad de números negativos es: %d \n", neg);
  printf(":)");
  
  return 0;

}
