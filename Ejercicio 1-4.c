/*Una persona invierte en un banco una determinada cantidad de dinero y a una cierta tasa de interés mensual. Elabora un código que permita obtener el monto de dinero que obtendrá al finalizar el mes.*/

#include <stdio.h>

int main()

{

  float din = 0;
  float inte = 0;
  float res = 0;

  printf("Ingrese la cantidad de dinero inicial. \n");
  scanf("%f", &din);

  printf("Ingrese la tasa de interés. \n");
  scanf("%f", &inte);

  res = din * inte / 100;

  res = res + din;

  printf("Este será el monto que se obtendrá al final del mes: %f \n:)", res);

  return 0;

}
