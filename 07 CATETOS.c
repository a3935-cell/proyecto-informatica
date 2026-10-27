
/* Leer los dos catetos de un triangulo
rectangulo. Calcular la hipotenusa,
el perimetro y el area.
*/

#include <stdio.h>
#include <math.h>

int main(){
//Pedir datos
float catetoUno;
float catetoDos;

printf("Ingresa el primer cateto: ");
scanf("%f", &catetoUno);

printf("Ingresa el segundo cateto: ");
scanf("%f", &catetoDos);

//operaciones
float hipotenusa;
float perimetro;
float area;

hipotenusa = sqrt(catetoUno * catetoUno + catetoDos * catetoDos);
perimetro = catetoUno + catetoDos + hipotenusa;
area = (catetoUno * catetoDos) / 2;

//Mostrar Datos
printf("\nLa hipotenusa es: %.2f", hipotenusa);
printf("\nEl perimetro es: %.2f", perimetro);
printf("\nEl area es: %.2f", area);

return 0;
}
