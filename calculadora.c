#include <stdio.h>
//Suma
float suma(float a, float b)
{
  return a+b;
}
//Resta
float resta(float a, float b)
{
  return a-b;
}
//Multiplicacion
float multiplicacion(float a, float b)
{
  return a*b;
}
//Division
float division(float a, float b)
{
    return a/b;
}
int main()
{
int operacion;
  float a, b;
  int i=1;
  do
  {
    printf("Ingrese el primer numero: \n ");
    scanf("%f" ,&a);
    printf("Ingrese el segundo numero: \n");
    scanf("%f" ,&b);
    printf("Que operacion quieres? \n");
    printf("Caso 1: suma\n");
    printf("Caso 2: resta\n");
    printf("Caso 3: multiplicacion\n");
    printf("Caso 4: division\n");
    scanf("%d" ,&operacion);

    switch(operacion)
      {
        case 1:
          printf("El resultado de la suma es: %.2f" ,suma(a,b));
      break;
        case 2:
        printf("El resultado de la resta es: %.2f" ,resta(a,b));
      break;
        case 3:
        printf("El resultado de la multiplicacion es: %.2f" ,multiplicacion(a,b));
      break;
        case 4:
          if(b!=0)
          {
          printf("El resultado de la division es: %.2f" ,division(a,b));
          }
          else
          {
            printf("No se puede dividir entre 0");
          }
      break;
      }
    printf("\nQuieres repetir el algoritmo? si: 1 no: 2\n");
    scanf("%d" ,&i);
    if(i==2)
    {
      return 0;
    }
  }
    while(i==1);
}