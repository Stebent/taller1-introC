#include <stdio.h>
int main(){
    int numero,i,x=0,y=1,z;
    printf("Qué cantidad de numeros quiere ver ? : ");
    scanf("%d",&numero);
    printf("\n 0,1,");
    for ( i = 0; i < numero-2; i++)
    {
        z=x+y;
        printf("%d,",z);
        x=y;
        y=z;
    }
    return 0;
}