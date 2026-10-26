/* Leer una temperatura en grados Celsius y mostrarla en Fahrenheit y Kelvin. */

#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa la temperatura en grados Celsius: ");
float celsius;
scanf("%f",&celsius);

//operaciones
float fahrenheit;
float kelvin;

fahrenheit = (celsius * 9 / 5) + 32;
kelvin = celsius + 273.15;

//Mostrar Datos
printf("\nLa temperatura en Fahrenheit es: %f",fahrenheit);
printf("\nLa temperatura en Kelvin es: %f",kelvin);

}
