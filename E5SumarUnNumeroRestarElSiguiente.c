/*Sumar un numero y restar el siguiente 1-2+3-4+5-6+7 
impares==positivos
pares==negativos*/

#include <stdio.h>
int main()
{  
  int num=0, acum=0;
  printf("Ingrese un numero:\n");
  scanf("%d" ,&num);
  
  for(int i=1; i<=num; i++){
    if(i%2==0){
      acum-=i;
    }
    else{
      acum+=i;
    }
  }
  printf("El numero acumulado es: %d\n", acum);
  return 0;
}