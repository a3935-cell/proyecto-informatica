/* Leer una longitud en centímetros y mostrarla en pies y pulgadas. */

#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa la longitud en centimetros: ");
float centimetros;
scanf("%f",&centimetros);

//operaciones
float pulgadas;
float pies;
float pulgadasRestantes;

pulgadas = centimetros / 2.54;
pies = pulgadas / 12;
pulgadasRestantes = pulgadas - ((int)pies * 12);

//Mostrar Datos
printf("\nLa longitud en pies es: %d", (int)pies);
printf("\nEn pulgadas son: %f", pulgadasRestantes);

}
