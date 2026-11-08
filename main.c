/*
Leer un numero del 1 al 7 y mostrar
el dia de la semana correspondiente,
indicando si es dia laboral o fin de semana.
Si el numero no es valido, mostrar
"Error de opcion".
*/

#include <stdio.h>
main(){

//Pedir datos
int numero;

printf("Ingresa un numero del 1 al 7: ");
scanf("%d",&numero);

//Operaciones y condiciones
if(numero == 1){
    printf("\nLunes - Dia laboral");
}
else if(numero == 2){
    printf("\nMartes - Dia laboral");
}
else if(numero == 3){
    printf("\nMiercoles - Dia laboral");
}
else if(numero == 4){
    printf("\nJueves - Dia laboral");
}
else if(numero == 5){
    printf("\nViernes - Dia laboral");
}
else if(numero == 6){
    printf("\nSabado - Fin de semana");
}
else if(numero == 7){
    printf("\nDomingo - Fin de semana");
}
else{
    printf("\nError de opcion");
}

}