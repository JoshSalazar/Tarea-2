/*Haga un diagrama de flujo para obtener la tabla de multiplicar de un
número entero N, comenzando desde el 1.*/

#include <stdio.h>

int main()

{

  int N = 0;
  int T = 1;
  int c;

  printf("Ingrese un número \n");
  scanf("%d", &N);

  for(c = 1; c <= 10; c++)
  {

    T = N * c;

      printf("%d * %d = %d \n", N, c, T);

  }

  printf(":)");
  return 0;
  
}
