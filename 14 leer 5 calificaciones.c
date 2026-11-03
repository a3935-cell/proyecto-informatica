
/* Leer cinco calificaciones.
Mostrar el promedio, la calificacion mas alta
y la mas baja.
Indicar si el alumno esta aprobado o reprobado.
*/

#include <stdio.h>

int main(){
//Pedir datos
float calificacionUno;
float calificacionDos;
float calificacionTres;
float calificacionCuatro;
float calificacionCinco;

printf("Ingresa la primera calificacion: ");
scanf("%f", &calificacionUno);

printf("Ingresa la segunda calificacion: ");
scanf("%f", &calificacionDos);

printf("Ingresa la tercera calificacion: ");
scanf("%f", &calificacionTres);

printf("Ingresa la cuarta calificacion: ");
scanf("%f", &calificacionCuatro);

printf("Ingresa la quinta calificacion: ");
scanf("%f", &calificacionCinco);

//operaciones
float promedio;
float mayor;
float menor;

promedio = (calificacionUno + calificacionDos +
            calificacionTres + calificacionCuatro +
            calificacionCinco) / 5;

mayor = calificacionUno;
menor = calificacionUno;

if(calificacionDos > mayor){
    mayor = calificacionDos;
}
if(calificacionTres > mayor){
    mayor = calificacionTres;
}
if(calificacionCuatro > mayor){
    mayor = calificacionCuatro;
}
if(calificacionCinco > mayor){
    mayor = calificacionCinco;
}

if(calificacionDos < menor){
    menor = calificacionDos;
}
if(calificacionTres < menor){
    menor = calificacionTres;
}
if(calificacionCuatro < menor){
    menor = calificacionCuatro;
}
if(calificacionCinco < menor){
    menor = calificacionCinco;
}

//Mostrar Datos
printf("\nEl promedio es: %.2f", promedio);
printf("\nLa calificacion mas alta es: %.2f", mayor);
printf("\nLa calificacion mas baja es: %.2f", menor);

if(promedio >= 6){
    printf("\nEl alumno esta APROBADO");
}
else{
    printf("\nEl alumno esta REPROBADO");
}

return 0;
}
