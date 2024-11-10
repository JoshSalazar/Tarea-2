/*Construir un diagrama de flujo que pueda determinar, dados dos números
enteros, si un número es divisor del otro.*/

#include <stdio.h>

int main()

{
  
  int n1 = 0;
  int n2 = 0;

  printf("Ingrese el primer número. \n");
  scanf("%d", &n1);
  printf("Ingrese el segundo número. \n");
  scanf("%d", &n2);

  if (n1 == 0 || n2 == 0)
  {
    printf("No se puede dividir entre 0. :)");
  }
  else if(n1 % n2 == 0)
  {
    printf("%d es divisor de %d \n:)", n2, n1);
  }
  else if(n2 % n1 == 0)
  {
    printf("%d es divisor de %d \n:)", n1, n2);
  }
  else
  {
    printf("Ningún número es divisor del otro. :)");
  }

  return 0;
  
}
