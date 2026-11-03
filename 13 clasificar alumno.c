
/* Leer tres calificaciones, calcular el promedio
y clasificar al alumno.
Exento: promedio >= 9 y ninguna calificacion
menor a 6.
Ordinario: promedio de 6 a 8.99.
Extra: promedio menor a 6.
*/

#include <stdio.h>

int main(){
//Pedir datos
float calificacionUno;
float calificacionDos;
float calificacionTres;

printf("Ingresa la primera calificacion: ");
scanf("%f", &calificacionUno);

printf("Ingresa la segunda calificacion: ");
scanf("%f", &calificacionDos);

printf("Ingresa la tercera calificacion: ");
scanf("%f", &calificacionTres);

//operaciones
float promedio;

promedio = (calificacionUno + calificacionDos +
            calificacionTres) / 3;

//Mostrar Datos
printf("\nEl promedio es: %.2f", promedio);

if(promedio >= 9 &&
   calificacionUno >= 6 &&
   calificacionDos >= 6 &&
   calificacionTres >= 6){

    printf("\nEl alumno esta EXENTO");

}
else if(promedio >= 6){

    printf("\nEl alumno es ORDINARIO");

}
else{

    printf("\nEl alumno necesita EXTRA");

}

return 0;
}
