#include <stdio.h>
int exp(int numero1,int numero2);
int sumag(int numero1,int numero2);

int main(){
    int base;
    int exp;
    int sumago;
    printf("----------Bienvnido-------------- ");
    printf("Digite el numero base: ");
    scanf("%d",&base);
    printf("\nDigite el maximo de exponenciales: ");
    scanf("%d",&exp);
    sumago=sumag(base,exp);
    printf("\n Suma geometrica= %d ",sumago);
}
int exp(int numero1,int numero2){
    int exp=numero1;
    if (numero2==0)
    {
        exp=1;
        return exp;
    }else{
        for (int i = 0; i <= numero2; i++)
        {
            exp=exp*numero1;
        }
        
    }
    return exp;
}
int sumag(int numero1,int numero2){
    int sum=0;
    int expo;
    for (int i = 0; i <=numero2; i++)
    {
        expo=exp(numero1,i);
        sum=sum+exp;
    }
    
    return sum;

}