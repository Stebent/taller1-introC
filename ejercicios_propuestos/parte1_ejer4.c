#include <stdio.h>
#include <stdlib.h>

int main()
{
    
   float x;
    float y;
    float t;
    printf("cual es la velocidad de descarga \n");
    scanf("%f", &x);
    printf("digite el tamaño del archivo ");
    scanf("%f", &y);
    t = y / x;
    printf("A %f Megabits por segundo, un archivo de %f Megabits, tardara %f segundos en descargar \n",x,y,t);
    
    return 0;
}