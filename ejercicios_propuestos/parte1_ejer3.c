
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[30];
   float x;
    float y;
    printf("Ingrese su nombre \n");
    scanf("%s", nombre);
    printf("Cual es su altura digitelos en centimetros ");
    scanf("%e", &x);
    y = x / 100;
    printf("su nombre es:  '%s",nombre);
    printf("  y la altura  en metros es de %2f \n",y);

    return 0;
}