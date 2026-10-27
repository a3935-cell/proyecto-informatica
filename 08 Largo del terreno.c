
/* Calcular el costo total de un terreno
rectangular a partir de su largo, ancho
y precio por metro cuadrado.
Mostrar subtotal, IVA y total.
*/

#include <stdio.h>

int main(){
//Pedir datos
float largo;
float ancho;
float precioMetro;

printf("Ingresa el largo del terreno: ");
scanf("%f", &largo);

printf("Ingresa el ancho del terreno: ");
scanf("%f", &ancho);

printf("Ingresa el precio por metro cuadrado: ");
scanf("%f", &precioMetro);

//operaciones
float area;
float subtotal;
float iva;
float total;

area = largo * ancho;
subtotal = area * precioMetro;
iva = subtotal * 0.16;
total = subtotal + iva;

//Mostrar Datos
printf("\nEl area del terreno es: %.2f m2", area);
printf("\nEl subtotal es: $%.2f", subtotal);
printf("\nEl IVA del 16%% es: $%.2f", iva);
printf("\nEl total es: $%.2f", total);

return 0;
}
