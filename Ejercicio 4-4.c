/*Construir un diagrama de flujo para almacenar en un arreglo unidimen-
sional los 100 primeros números pares. Imprimir al final el arreglo.*/

#include <stdio.h>

int main()

{
  int N = 100;
  int arr[N];
  int c = 0;
  int i = 0;
  
  do
  {
    if(i % 2 == 0)
    {
      arr[c] = i;
      c = c + 1;
    }
    i = i +1;
  }
  while(c <= 100);

  i = 0;

  printf("Esta es la lista de los primeros 100 números pares: \n");
  
  while(i <= 100)
  {
    printf("%d \n", arr[i]);
    i = i +1;
  }

  printf(":)");

  return 0;
  
}
