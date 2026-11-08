/*
Leer un mes (1 a 12) y un año.
Mostrar el nombre del mes y cuantos
dias tiene, considerando años bisiestos
para febrero.
*/

#include <stdio.h>
main(){

//Pedir datos
int mes;
int anio;

printf("Ingresa un numero de mes (1 al 12): ");
scanf("%d",&mes);

printf("Ingresa el año: ");
scanf("%d",&anio);

//Operaciones y condiciones
if(mes == 1){
    printf("\nEnero tiene 31 dias");
}
else if(mes == 2){
    if((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
        printf("\nFebrero tiene 29 dias");
    }
    else{
        printf("\nFebrero tiene 28 dias");
    }
}
else if(mes == 3){
    printf("\nMarzo tiene 31 dias");
}
else if(mes == 4){
    printf("\nAbril tiene 30 dias");
}
else if(mes == 5){
    printf("\nMayo tiene 31 dias");
}
else if(mes == 6){
    printf("\nJunio tiene 30 dias");
}
else if(mes == 7){
    printf("\nJulio tiene 31 dias");
}
else if(mes == 8){
    printf("\nAgosto tiene 31 dias");
}
else if(mes == 9){
    printf("\nSeptiembre tiene 30 dias");
}
else if(mes == 10){
    printf("\nOctubre tiene 31 dias");
}
else if(mes == 11){
    printf("\nNoviembre tiene 30 dias");
}
else if(mes == 12){
    printf("\nDiciembre tiene 31 dias");
}
else{
    printf("\nError de opcion");
}

}