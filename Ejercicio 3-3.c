/*Hacer un diagrama de flujo que calcule la suma de los números pares
comprendidos entre el 10 y 50.*/

#include <stdio.h>

int main()

{

  int N = 10;
  int suma = 0;
  
 int c = 10;
  for(N = 10; N <= 50; N++)
  {
    if(N % 2 == 0)
    {
      suma = suma + N;
    }
  }

  printf("La suma de los números pares comprendidos entre el 10 y el 50 es: %d :)", suma);

  return 0;
  
}
