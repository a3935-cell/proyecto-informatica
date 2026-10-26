
/* Leer el costo de una compra y el dinero
entregado por el cliente.
Calcular el cambio y desglosarlo en
billetes y monedas.
*/

#include <stdio.h>

int main(){
//Pedir datos
int costo;
int dinero;

printf("Ingresa el costo de la compra: ");
scanf("%d", &costo);

printf("Ingresa el dinero entregado: ");
scanf("%d", &dinero);

//operaciones
int cambio;
int billete500, billete200, billete100;
int billete50, billete20;
int moneda10, moneda5, moneda2, moneda1;

cambio = dinero - costo;

if(cambio < 0){
    printf("\nEl dinero es insuficiente");
}
else{
    int restante;
    restante = cambio;

    billete500 = restante / 500;
    restante = restante % 500;

    billete200 = restante / 200;
    restante = restante % 200;

    billete100 = restante / 100;
    restante = restante % 100;

    billete50 = restante / 50;
    restante = restante % 50;

    billete20 = restante / 20;
    restante = restante % 20;

    moneda10 = restante / 10;
    restante = restante % 10;

    moneda5 = restante / 5;
    restante = restante % 5;

    moneda2 = restante / 2;
    restante = restante % 2;

    moneda1 = restante;

//Mostrar Datos
    printf("\nEl cambio es: %d", cambio);
    printf("\nBilletes de 500: %d", billete500);
    printf("\nBilletes de 200: %d", billete200);
    printf("\nBilletes de 100: %d", billete100);
    printf("\nBilletes de 50: %d", billete50);
    printf("\nBilletes de 20: %d", billete20);
    printf("\nMonedas de 10: %d", moneda10);
    printf("\nMonedas de 5: %d", moneda5);
    printf("\nMonedas de 2: %d", moneda2);
    printf("\nMonedas de 1: %d", moneda1);
}

return 0;
}
