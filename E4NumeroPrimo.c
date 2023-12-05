
/*Determinar si un numero es primo*/
#include <stdio.h>
int main()
{
  int num, primo;

  printf("Ingrese un numero:\n");
  scanf("%d" ,&num);
  primo=num%2;
  if(primo!=0)
  {
    printf("El numero %d es primo" ,num);
  }else 
  {
    printf("El numero %d no es primo" ,num);
  }
  return 0;
}