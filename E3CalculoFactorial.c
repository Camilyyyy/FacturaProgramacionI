/*Calcular el factorial de un numero dado por el usuario*/

#include <stdio.h>
int main() {
  int num, acu=1;
  printf("Ingresa un numero:\n");
  scanf("%d" ,&num);
  for (int i=1; i<=num; i++){
    acu=acu*i;
  }
  printf("El factorial de %d es: %d",num, acu);
  return 0;
}