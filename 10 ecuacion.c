
/* Resolver la ecuacion de primer grado
ax + b = cx + d.
*/

#include <stdio.h>

int main(){
//Pedir datos
float a;
float b;
float c;
float d;

printf("Ingresa el valor de a: ");
scanf("%f", &a);

printf("Ingresa el valor de b: ");
scanf("%f", &b);

printf("Ingresa el valor de c: ");
scanf("%f", &c);

printf("Ingresa el valor de d: ");
scanf("%f", &d);

//operaciones
float x;

if(a == c){
    if(b == d){
        printf("\nLa ecuacion tiene infinitas soluciones");
    }
    else{
        printf("\nLa ecuacion no tiene solucion");
    }
}
else{
    x = (d - b) / (a - c);

//Mostrar Datos
    printf("\nEl valor de x es: %.2f", x);
}

return 0;
}
