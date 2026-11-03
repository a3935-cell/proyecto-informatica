
/* Leer los tres lados de un triangulo.
Verificar que puedan formarlo y clasificarlo
por sus lados y por sus angulos.
*/

#include <stdio.h>

int main(){
//Pedir datos
float ladoUno;
float ladoDos;
float ladoTres;

printf("Ingresa el primer lado: ");
scanf("%f", &ladoUno);

printf("Ingresa el segundo lado: ");
scanf("%f", &ladoDos);

printf("Ingresa el tercer lado: ");
scanf("%f", &ladoTres);

//operaciones

//Verificar si se puede formar un triangulo
if(ladoUno > 0 && ladoDos > 0 && ladoTres > 0 &&
   ladoUno + ladoDos > ladoTres &&
   ladoUno + ladoTres > ladoDos &&
   ladoDos + ladoTres > ladoUno){

    printf("\nSi se puede formar un triangulo");

//Clasificar por sus lados
    if(ladoUno == ladoDos && ladoDos == ladoTres){
        printf("\nEl triangulo es EQUILATERO");
    }
    else if(ladoUno == ladoDos ||
            ladoUno == ladoTres ||
            ladoDos == ladoTres){
        printf("\nEl triangulo es ISOSCELES");
    }
    else{
        printf("\nEl triangulo es ESCALENO");
    }

//Ordenar los lados para clasificar los angulos
    float mayor;
    float menorUno;
    float menorDos;
    float auxiliar;

    mayor = ladoUno;
    menorUno = ladoDos;
    menorDos = ladoTres;

    if(menorUno > mayor){
        auxiliar = mayor;
        mayor = menorUno;
        menorUno = auxiliar;
    }

    if(menorDos > mayor){
        auxiliar = mayor;
        mayor = menorDos;
        menorDos = auxiliar;
    }

//Clasificar por sus angulos
    if(mayor * mayor ==
       menorUno * menorUno + menorDos * menorDos){

        printf("\nEl triangulo es RECTANGULO");
    }
    else if(mayor * mayor <
            menorUno * menorUno + menorDos * menorDos){

        printf("\nEl triangulo es ACUTANGULO");
    }
    else{

        printf("\nEl triangulo es OBTUSANGULO");
    }

}
else{
    printf("\nNo se puede formar un triangulo");
}

return 0;
}
