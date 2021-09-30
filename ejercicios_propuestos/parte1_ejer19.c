#include <stdio.h>
int cmultiplo(int numero1,int numero2);
int main(){
 int numero1;
 int numero2;
 int mul;
 int aux;

    do
    {
        printf("IngreDigitese el primer numero: ");
        scanf("%d",&numero1);
        printf("\n Digite el segundo numero: ");
        scanf("%d",&numero2);
        mul=cmultiplo(numero1,numero2);
        if (mul==1)
        {
            printf("\n el %d es multiplo de %d\n",numero2,numero1);
        }else{
            printf("\n el %d no es multiplo de %d\n",numero2,numero1);
        }
        printf("¿Quiere ingresar mas numeros? (1 Si o 0 No)");
        scanf("%d",&aux);
    } while (aux==1);
    return 0;
}
int cmultiplo(int numero1,int numero2){
    if ((numero2%numero1)==0)
    {
        return 1;
    }else{
        return 0;
    }
    
}