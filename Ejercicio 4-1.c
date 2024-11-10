/*Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.*/

#include <stdio.h>

int main()

{
  int N;
  int a = 0;
  int c = 0;
  int sum = 0;

  printf("Ingrese la longitud del arreglo.\n");
  scanf("%d", &N);

  int arr[N];
  
  for(c = 0; c < N; c++)
  {
    printf("Ingrese un número entero. \n");
    scanf("%d", &a);
    
    arr[c] = a;  
  }
  
  for(c = 0; c < N; c++)
  {
    sum = sum + arr[c];
  }

  printf("La suma de los número introducidos es: %d :)", sum);
  
  return 0;
}
