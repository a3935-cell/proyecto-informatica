
/* Leer el radio y la altura de un cilindro.
Calcular su area total, volumen y
capacidad en litros.
Las medidas estan en cm.
*/

#include <stdio.h>

int main(){
//Pedir datos
float radio;
float altura;

printf("Ingresa el radio del cilindro en cm: ");
scanf("%f", &radio);

printf("Ingresa la altura del cilindro en cm: ");
scanf("%f", &altura);

//operaciones
float areaTotal;
float volumen;
float litros;
float pi = 3.1416;

areaTotal = 2 * pi * radio * (radio + altura);
volumen = pi * radio * radio * altura;
litros = volumen / 1000;

//Mostrar Datos
printf("\nEl area total es: %.2f cm2", areaTotal);
printf("\nEl volumen es: %.2f cm3", volumen);
printf("\nLa capacidad es: %.2f litros", litros);

return 0;
}
