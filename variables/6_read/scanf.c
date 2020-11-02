#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()

{
int r;
float l, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l=PI*(r*2);
a=PI*pow(r,2);
printf("La longitud de la circunferencia vale %.2f\n", l);
printf("El área del círculo vale %.2f\n", a);
}
