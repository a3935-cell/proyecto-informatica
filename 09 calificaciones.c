
/* Leer cuatro calificaciones parciales
y calcular la calificacion final
ponderada (20%, 20%, 25% y 35%).
*/

#include <stdio.h>

int main(){
//Pedir datos
float calificacionUno;
float calificacionDos;
float calificacionTres;
float calificacionCuatro;

printf("Ingresa la primera calificacion: ");
scanf("%f", &calificacionUno);

printf("Ingresa la segunda calificacion: ");
scanf("%f", &calificacionDos);

printf("Ingresa la tercera calificacion: ");
scanf("%f", &calificacionTres);

printf("Ingresa la cuarta calificacion: ");
scanf("%f", &calificacionCuatro);

//operaciones
float calificacionFinal;

calificacionFinal = (calificacionUno * 0.20) +
                    (calificacionDos * 0.20) +
                    (calificacionTres * 0.25) +
                    (calificacionCuatro * 0.35);

//Mostrar Datos
printf("\nLa calificacion final es: %.2f", calificacionFinal);

return 0;
}
