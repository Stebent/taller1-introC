#include <stdio.h>

int main(){
    int login;
    login = 0;
    float saldo_inicial;
    float cargos;
    float creditos;
    float lim;
    float nsaldo;
    saldo_inicial = 0;
    cargos = 0;
    creditos = 0;
    lim = 0;
    nsaldo = 0;
    while (login != -1)
    {
       printf("Ingrese el numero de cuenta (o -1 para salir): ");
       scanf("%d",&login);
       if (login == -1)
       {
          
          break;
       }
       
       
       printf("\n");
       printf("Ingrese el saldo inicial: ");
       scanf("%f",&saldo_inicial);
       printf("\n");
       printf("Ingrese los cargos totales: ");
       scanf("%f",&cargos);
       printf("\n");
       printf("Ingrese los creditos totales: ");
       scanf("%f",&creditos);
       printf("\n");
       printf("Ingrese el limite de credito: ");
       scanf("%f",&lim);
       nsaldo = (saldo_inicial + cargos ) - creditos;
       if (nsaldo > lim)
        {
            printf("Su nuevo saldo es %.2f \n",nsaldo);
            printf("Cuenta: %d \n",login);
            printf("Limite de credito: %.2f \n",lim);
            printf("Sus cargos totales: %.2f \n",cargos);
            printf("Sus creditos totales: %.2f \n",creditos);
            printf("Se ha excedido el limite de su credito\n");
        }else{
            printf("Su nuevo saldo es %.2f \n",nsaldo);
            printf("Cuenta: %d \n",login);
            printf("Limite de credito: %.2f \n",lim);
            printf("Sus cargos totales: %.2f \n",cargos);
            printf("Sus creditos totales: %.2f \n",creditos);
        }
        saldo_inicial=0;
        cargos=0;
        creditos=0;
        lim=0;
        nsaldo=0;
        login=0;
    }
    
}