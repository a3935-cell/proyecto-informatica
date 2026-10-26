
/* Leer el nombre y el apellido de una persona,
su año de nacimiento y el año actual.
Mostrar el nombre en formato "Apellido, Nombre"
y su edad.
*/

#include <stdio.h>

int main(){
//Pedir datos
char nombre[50];
char apellido[50];
int anoNacimiento;
int anoActual;

printf("Ingresa tu nombre: ");
scanf("%49s", nombre);

printf("Ingresa tu apellido: ");
scanf("%49s", apellido);

printf("Ingresa tu año de nacimiento: ");
scanf("%d", &anoNacimiento);

printf("Ingresa el año actual: ");
scanf("%d", &anoActual);

//operaciones
int edad;

edad = anoActual - anoNacimiento;

//Mostrar Datos
printf("\nNombre: %s, %s", apellido, nombre);
printf("\nTu edad es: %d años", edad);

return 0;
}
