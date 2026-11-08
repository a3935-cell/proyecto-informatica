/*
Leer tres numeros.
Si el primero es negativo, mostrar el producto
de los tres; si es cero, mostrar la suma;
si es positivo, mostrar el promedio.
*/

#include <stdio.h>
main(){

//Pedir datos
float numeroUno;
float numeroDos;
float numeroTres;

printf("Ingresa el primer numero: ");
scanf("%f",&numeroUno);

printf("Ingresa el segundo numero: ");
scanf("%f",&numeroDos);

printf("Ingresa el tercer numero: ");
scanf("%f",&numeroTres);

//Operaciones
float producto;
float suma;
float promedio;

producto = numeroUno * numeroDos * numeroTres;
suma = numeroUno + numeroDos + numeroTres;
promedio = (numeroUno + numeroDos + numeroTres)/3;

//Mostrar datos
if(numeroUno < 0){
    printf("\nEl producto de los tres numeros es: %f",producto);
}
else if(numeroUno == 0){
    printf("\nLa suma de los tres numeros es: %f",suma);
}
else{
    printf("\nEl promedio de los tres numeros es: %.2f",promedio);
}

}