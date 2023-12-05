/*Calcular tarifas de saldo en celulares y poner precios:
de 1000 a 1500 premium
de 500 a 999 intermedia
de 100 a 499 basica*/
#include <stdio.h>
int main(){
  float saldo, tarifa;
  printf("Ingrese cuantos minutos tiene de saldo:\n");
  scanf("%f" ,&saldo);
  //Cada minuto vale 0.07cts
  tarifa=(saldo*0.07);
if(saldo>=100)
  {
    if(saldo>=1000 && saldo<=1500)
      {
        printf("Usted es usuario premium y el valor a pagar por ese privilegio es de: %.2f\n" ,tarifa);
      }
        else if(saldo>=500 && saldo<=999)
        {
          printf("Usted es usuario intermedio pague -> %.2f\n" ,tarifa);
        }
              else if (saldo>=100 && saldo<=499)
              {
                printf("Usted es usuario pobre pague -> %.2f\n" ,tarifa);
              }
      }
  else if(saldo<100 && saldo>=0)
  {
    printf("No tiene los minutos suficiente vaya a comprar\n");
  }
  else if(saldo<0)
  {
    printf("Ingrese un numero positivo\n");
  }
}