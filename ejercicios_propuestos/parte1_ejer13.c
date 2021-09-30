#include <stdio.h>
#include <string.h>
int main(){
    int x,numero,i;
    char a [30];
    char b [30];
    char c [30];
    char d [30];
    char e [30];
    printf("Ingrese un numero del 1 al 30: \n");
   
    for (size_t i = 1; i <= 5 ; i++)
    {
        printf("----------------------> ");
        scanf("%d",&numero);
        if (i == 1){
        for (size_t j = 0; j < numero; j++)
           {
               strcat(a, "*");
 
           }
        }else if( i == 2){
            for (size_t j = 0; j < numero; j++)
           {
               strcat(b, "*");
 
 
           }
        }else if (i == 3){
            for (size_t j = 0; j < numero; j++)
           {
               strcat(c, "*");
 
 
           }
        }else if (i == 4){
            for (size_t j = 0; j < numero; j++)
           {
               strcat(d, "*");
 
 
           }
        }else if (i == 5){
            for (size_t j = 0; j < numero; j++)
           {
               strcat(e, "*");
 
 
           }
        }
    }
    printf("%s \n %s  \n %s \n %s \n %s \n  ",a,b,c,d,e);
   
    

}