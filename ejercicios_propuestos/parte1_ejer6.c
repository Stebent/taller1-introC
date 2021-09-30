#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
  printf("Diite un número: \n");
  scanf("%d", &numero1);
  printf("Digite un segundo numero: \n");
  scanf("%d", &numero2);
  if (numero1 % numero2 == 0) {
      printf("el %d es multiplo del %d \n",numero1,numero2);
  }else{
      printf("el %d no es multiplo del %d \n",numero1,numero2);
  }
}