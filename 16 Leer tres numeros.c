#include <stdio.h>

int main(){

    //Pedir datos
    float numeroUno, numeroDos, numeroTres;
    float auxiliar;

    printf("Ingresa el primer numero: ");
    scanf("%f", &numeroUno);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &numeroDos);

    printf("Ingresa el tercer numero: ");
    scanf("%f", &numeroTres);

    //Operaciones
    if(numeroUno > numeroDos){
        auxiliar = numeroUno;
        numeroUno = numeroDos;
        numeroDos = auxiliar;
    }

    if(numeroUno > numeroTres){
        auxiliar = numeroUno;
        numeroUno = numeroTres;
        numeroTres = auxiliar;
    }

    if(numeroDos > numeroTres){
        auxiliar = numeroDos;
        numeroDos = numeroTres;
        numeroTres = auxiliar;
    }

    //Mostrar datos
    printf("\nNumeros de menor a mayor: %.2f, %.2f, %.2f",
           numeroUno, numeroDos, numeroTres);

    return 0;
}
