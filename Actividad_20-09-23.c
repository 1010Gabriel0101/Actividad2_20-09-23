#include<stdio.h>
#include<math.h>
/Programa que calcula la hipotenusa, área y perímetro de un triángulo/
void main()
{
  float catetoa,catetob,hipotenusa,area,perimetro;
  printf("Introduce un cateto: ");
 scanf("%f",&catetoa);
  printf("Introduce el otro cateto: ");
 scanf("%f",&catetob);

hipotenusa = sqrt(catetoa*catetoa+catetob*catetob);

area = (catetoa*catetob)/2;

perimetro = (catetoa+catetob+hipotenusa);

printf("La hipotenusa es: %f", hipotenusa);
}
