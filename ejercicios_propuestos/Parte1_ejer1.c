#include <stdio.h>

int main()
{
    char nombre[30];
	
    printf("Ingrese su nombre \n");
    fgets(nombre,30,stdin);
    printf(" El nombre ingreado fue:'%s' \n",nom);
    printf("\n El nombre desplegado a la derecha  es:%20s\n",nombre);
    printf("\n El nombre desplegado a la izquierda es:%-20s\n",nombre);
    printf("\n El nombre ingreado 3 caracteres mas amplio:%11s\n",nombre);
    
    return 0;
}