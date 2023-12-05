
/*Convertir grados celsius a grados Fahrenheit (C=(F-32/1.8))*/
#include <stdio.h>
int main()
{
  float celsius, fahrenheit;
  int opcion;
  printf("Que quiere calcular?\n");
  printf("1.- Celsius a Fahrenheit\n");
  printf("2.- Fahrenheit a Celsius\n");
  scanf("%d" ,&opcion);

  switch(opcion)
  {
    case 1:
      printf("Ingrese los grados en celsius:\n");
      scanf("%f" ,&celsius);
      fahrenheit=(celsius*1.8)+32;
      printf("Los grados convertidos a fahrenheit son: %.2f\n" ,fahrenheit);
    break;
    
    case 2:
    printf("Ingrese los grados en fahrenheit:\n");
    scanf("%f" ,&fahrenheit);
    celsius=((fahrenheit-32)/1.8);
    printf("Los grados convertidos a celsius son: %.2f\n" ,celsius);
    break;
    default:
    printf("Ingreso equivocado");
  } 
  return 0;
}