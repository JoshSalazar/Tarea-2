/*Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
También se sabe que si el número de días de estancia es mayor a 7 y la
distancia total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>

int main()

{

  float dist = 0;
  float dias = 0;
  float cost = 0;

  printf("Ingrese la distancia de ida en Km. \n");
  scanf("%f", &dist);

  printf("ingrese los días de estancia. \n");
  scanf("%f", &dias);

  dist = dist * 2;
  cost = dist * 0.23;
    
  if(dias > 7 && dist > 800)

  {
    
    cost = cost - (cost * 0.3);
  
  }

  printf("Este es el costo total del ticket: %f", cost);

  return 0;

}
