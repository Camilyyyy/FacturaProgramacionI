
/*Aumentar el salario en una empresa el 10% dado un valor del salario ingresado por teclado*/
#include <stdio.h>

int main()
{
  float salario, salarioN, salariof;
  printf("Ingrese su salario:\n");
  scanf("%f" ,&salario);
  salarioN=((salario*10)/100);
  salariof=salario+salarioN;
  printf("El salario final es de: %.2f",salariof);
  return 0;
}
