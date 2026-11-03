
/* Leer un numero entero y decir si es
positivo, negativo o cero.
Ademas, indicar si es par o impar.
*/

#include <stdio.h>

int main(){
//Pedir datos
int numero;

printf("Ingresa un numero entero: ");
scanf("%d", &numero);

//operaciones

//Mostrar Datos
if(numero > 0){
    printf("\nEl numero es positivo");
}
else if(numero < 0){
    printf("\nEl numero es negativo");
}
else{
    printf("\nEl numero es cero");
}

if(numero % 2 == 0){
    printf("\nEl numero es par");
}
else{
    printf("\nEl numero es impar");
}

return 0;
}
