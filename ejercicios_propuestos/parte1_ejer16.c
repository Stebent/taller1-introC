#include <stdio.h>
int main(){
    int numVentas;
    printf("Bienvenido\n");
    printf("..........................");
    printf("Digit el numerod de ventas: ");
    scanf("%d",&numVentas);

    if (numVentas>0 && numVentas<=20000)
    {
       numVentas=numVentas*0.05;
    }
    else if (numVentas>20001&&numVentas<=50000)
    {
        numVentas*=0.07;
        numVentas+=1000;
    }
    else if (numVentas>=50001)
    {
        numVentas*=0.01;
        numVentas+=3100;
    }
    printf("La comision para este numero de ventas es: %d ",numVentas);
    return 0;


}