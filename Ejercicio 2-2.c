/*Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.*/

#include <stdio.h>

int main()

{

  float suel = 0;
  float aum1 = 0.15;
  float aum2 = 0.12;
  float total = 0;

  printf("Ingrese su sueldo. \n");
  scanf("%f", &suel);

  if(suel < 1000)

  {
    
  total = suel + (suel * aum1);
  
  }  

  else

  {

  total = suel + (suel * aum2);

  }

  printf("Este es el suelto total: %f \n:)", total);

  return 0;
  
}
