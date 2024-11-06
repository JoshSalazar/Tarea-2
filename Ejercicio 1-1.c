/*Escriba un diagrama de flujo tal que dado como datos dos números y calcular la suma, resta y multiplicación de dichos números.*/

#include <stdio.h>

int main()

{
	
	int a = 0;
	int b = 0;

	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;

	printf("Ingrese el primer número:\n");
	scanf("%d", &a);

	printf("Ingrese el segundo número:\n");
	scanf("%d", &b);

	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;

	printf("Estos son los resultados: \n");
	printf("Suma: \n");
	printf("%d + %d = %d\n", a, b, suma);

	printf("Resta: \n");
	printf("%d - %d = %d\n", a, b, resta);

	printf("Multiplicación: \n");
	printf("%d * %d = %d\n", a, b, multiplicacion);

	return 0;

}
