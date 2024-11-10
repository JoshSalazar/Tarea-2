/*En un negocio de productos electrodomésticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.*/

#include <stdio.h>

int main()

{

  float cos = 0;
  float desc = 0.08;
  float total = 0; 

  printf("Ingrese el costo total original de la compra.\n");
  scanf("%f", &cos);

  if(cos > 2500)

  {  

    total = cos - (cos * desc);

    printf("El costo con descuento es: %f\n :)", total);

  }

  else
    
  {

    printf("El costo es: %f" \n:), cos);

  }

  return 0;

}
