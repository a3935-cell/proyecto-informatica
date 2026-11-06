#include <stdio.h>

int main(){
//Pedir datos
float largo;
float ancho;

printf("Ingresa el largo del terreno: ");
scanf("%f", &largo);

printf("Ingresa el ancho del terreno: ");
scanf("%f", &ancho);

//operaciones
float area;
float subtotal;
float descuento;
float total;

area = largo * ancho;
subtotal = area * 900;

if(area > 1000){
    descuento = subtotal * 0.15;
}
else if(area > 500){
    descuento = subtotal * 0.10;
}
else{
    descuento = 0;
}

total = subtotal - descuento;

//Mostrar Datos
printf("\nEl area del terreno es: %.2f m2", area);
printf("\nEl subtotal es: $%.2f", subtotal);
printf("\nEl descuento es: $%.2f", descuento);
printf("\nEl costo total es: $%.2f", total);

return 0;
}
