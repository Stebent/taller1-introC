#include <stdio.h>

int main(){
    int numero,i;
     numero=0;
     i=0;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    printf("\n");
    printf("\nN\t10*N\t100*N\t1000*N\n\n");
    for ( i = 1; i <= numero; i++)
    {
        printf("\n%d \t%d \t%d \t%d",i,(i*10),(i*100),(i*1000));
    }
    

}