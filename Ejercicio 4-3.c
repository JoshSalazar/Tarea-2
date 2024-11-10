/*Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi-
mensional de enteros, determinar cuántos de ellos son positivos, negativos
o nulos.*/

#include <stdio.h>

int main()

{
  int N;
  int a = 0;
  int c = 0;
  int nul = 0;
  int pos = 0;
  int neg = 0;

  printf("Ingrese la longitud del arreglo.\n");
  scanf("%d", &N);

  int arr[N];
  
  for(c = 0; c < N; c++)
  {
    printf("Ingrese un número entero para el arreglo. \n");
    scanf("%d", &a);
    
    arr[c] = a;  
  }

  for(c = 0; c < N; c++)
  {   
    if(arr[c] == 0)
    {
      nul = nul + 1;
    }
    else if(arr[c] > 0)
    {
      pos = pos + 1;
    }
    else if(arr[c] < 0)
    {
      neg = neg +1;
    }
  }

  printf("Estos son los resultados: \n");
  printf("Números positivos: %d \n", pos);
  printf("Números nulos: %d \n", nul);
  printf("Números negativos: %d \n:)", neg);

  return 0;
}
