/*Determinar la suma de todos los hasta el numero que 
ingreso el usuario*/
#include <stdio.h>
int suma (int n)
{
  int i;
  int a=0;
  for (i=1; i<=n; i++)
  {
    a=a+i;
  }
  return a;
}
int main()
{
  int  n;
  printf("Ingrese un numero\n");
  scanf("%d" ,&n);
  printf("La suma es: %d\n" ,suma(n));
  return 0;
}