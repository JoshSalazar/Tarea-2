/*Construir un diagrama de flujo tal que dado el radio de un círculo, calcule e imprima el ́area y la circunferencia.*/
#include <stdio.h>
#include <math.h>

int main ()
{
  int r = 0;
  int pi = 3.14159265359;
  int area = 0;
  int circ = 0;

  prinft("Introduzca el radio del círculo. \n");
  scanf("%d", &r);

  area = pi * r * r;
  circ = 2 * pi * r;

  prinft("Estos son los resultados: \n");
  printf("Área: \n");
  printf("%d \n", area);
  printf("Circunferencia: \n");
  printf("%d", circ);

  return 0;
}
