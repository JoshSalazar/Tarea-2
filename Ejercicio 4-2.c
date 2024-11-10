/*construya un programa tal que dado como entrada un arreglo unidimen-
sional de enteros y un número entero, determine cuántas veces se encuentra
el número dentro del arreglo.*/

#include <stdio.h>

int main()

{
  int N;
  int a = 0;
  int c = 0;
  int num = 0;
  int total = 0;

  printf("Ingrese la longitud del arreglo.\n");
  scanf("%d", &N);

  int arr[N];
  
  for(c = 0; c < N; c++)
  {
    printf("Ingrese un número entero para el arreglo. \n");
    scanf("%d", &a);
    
    arr[c] = a;  
  }

  printf("Ingrese el número que quiera contar en el arreglo. \n");
  scanf("%d", &num);

  for(c = 0; c < N; c++)
  {
    if(arr[c] - num == 0)
    {
      total = total + 1;
    }
  }

  printf("La cantidad de veces que el número %d se encuentra en el arreglo es: %d :)", num, total);

  return 0;
  
}
