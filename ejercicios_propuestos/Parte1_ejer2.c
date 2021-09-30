#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Programa nuemeros en notacion cientifica.\n");
    printf("Digite el número que desea convertir: ");
    scanf("%f", &x);
    
    printf("El valor de %f en notación cientifica será: %E \n", x,x);

    return 0; 
}