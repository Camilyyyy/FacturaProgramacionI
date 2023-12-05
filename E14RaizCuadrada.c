
/*Ingrese un numero y calcule e imprtima su raiz cuadrada. Si el numero es negativo imprima el numero y un mensaje que diga que tiene raiz imaginaria*/
#include <stdio.h>
#include <math.h>
int main() {
  float num, raiz;
  printf("Ingrese un numero:\n");
  scanf("%f" ,&num);

  if(num<0)
  {
    printf("El numero es: %.1f y tiene raiz imaginaria\n" ,num);
  }
  if(num>=0)
  {
    raiz=sqrt(num);
    printf("La raiz cuadrada del numero es: %.1f\n" ,raiz);
  }
  return 0;
} 