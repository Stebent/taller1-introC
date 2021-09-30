#include <stdio.h>

int main()
{
  int numero;
  printf("Digite un número: \n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("El numer %d es par \n",numero);
  } else {
    printf("El numer %d es impar \n",numero);
  }
  return 0;
}