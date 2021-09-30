#include <stdio.h>
int main(){
    int numero1,numero2,menor,i;
    numero1=0;
    numero2=0;
    menor=0;
    printf("Cuantos numeros desea comparar: ");
    scanf("%d",&numero1);
    printf("\n");
    printf("Digite el primero numero: ");
    scanf("%d",&menor);
    
    for ( i = 2; i <= numero1; i++)
    {
        printf("Digite otro numero: ");
        scanf("%d",&numero2);
        if (numero2<menor)
        {
            menor=numero2;
        }
        
    }
    printf("\n");
    printf("El numeros menor ingresado es: %d",menor);


}