#include <stdio.h>

int main()
{
  int numero;
  int div1 , div2, div3, div4, div5;
  printf("Digite un número: \n");
  scanf("%d", &numero);
  div1 = numero / 10000;
  div2 = (numero % 10000) / 1000;
  div3 = (numero % 10000) % 1000 / 100;
  div4 = ((numero% 10000) % 1000) % 100 / 10;
  div5 = (((numero % 10000) % 1000) % 100) % 10;
  printf("el numero %d dividido en son digitos queda asi %d %d %d %d %d \n",numero,div1,div2,div3,div4,div5);

  return 0;  
}
