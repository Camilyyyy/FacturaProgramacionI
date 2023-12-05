/*Operaciones aritmeticas 
Pedirle al usuario que digite dos numeros y sumarlos, restarlos, multiplicarlos y dividirnos*/
#include <stdio.h>
int suma(int a, int b)
{
  return a+b;
}

int resta(int a, int b)
{
  return a-b;
}

int multiplicacion(int a, int b)
{
  return a*b;
}

int division(int a, int b)
{
  int d;
  if(b!=0)
  {
    d=a/b;
  }
  return d;
}

int main() {
  int num1, num2;
  int a, b;
  printf("Ingrese el primer numero:\n");
  scanf("%d" ,&num1);
  printf("Ingrese el segundo numero:\n");
  scanf("%d" ,&num2);
  printf("La suma es: %d\n" ,suma(num1, num2));
  printf("La resta es: %d\n" ,resta(num1, num2));
  printf("La multiplicacion es: %d\n" ,multiplicacion(num1, num2));
  printf("La division es: %d\n" ,division(num1, num2));
  return 0;
}