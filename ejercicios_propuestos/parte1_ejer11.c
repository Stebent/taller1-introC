#include <stdio.h>
int main(){
    printf("Programa para calcular el producto de enteros impares del 1-15 \n");
    int i,prod;
    prod=1;
    for ( i = 1; i <= 15; i++)
    {
        if (i%2!=0)
        {
            prod*=i;
        }
    }
    printf("El producto es: %d ",prod);

}