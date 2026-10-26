/*Leer tres numeros enteros y mostrar
su suma,
su producto y su
promedio con dos
decimales.
*/

#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa el primer numero");
float numeroUno;
scanf("%f",&numeroUno);
printf("Ingresa el segundo numero");
float numeroDos;
scanf("%f",&numeroDos);
printf("Ingresa el tercer numero");
float numeroTres;
scanf("%f",&numeroTres);

//operaciones
float suma;
float producto;
float promedio;

suma = numeroUno + numeroDos + numeroTres;
producto = numeroUno * numeroDos + numeroTres;
promedio = (numeroUno+numeroDos+numeroTres)/3;

//Mostrar Datos
printf("\nLa suma de los numeros es :  %f",suma);
printf("\nEl producto de los numeros es :%f",producto);
printf("\nEl promedio delos numeros es:%.2f",promedio);
}
