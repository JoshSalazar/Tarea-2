/*Construir un diagrama de flujo tal que dado el radio de un círculo, calcule e imprima el ́area y la circunferencia.*/
#include <stdio.h>
#include <math.h>

int main ()
{
  float r = 0;
  float pi = 3.14159265359;
  float area = 0;
  float circ = 0;

  printf("Introduzca el radio del círculo. \n");
  scanf("%f", &r);

  area = pi * r * r;
  circ = 2 * pi * r;

  printf("Estos son los resultados: \n");
  printf("Área: \n");
  printf("%f \n", area);
  printf("Circunferencia: \n");
  printf("%f", circ);

  return 0;
}
