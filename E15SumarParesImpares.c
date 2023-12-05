/*Sumar pares desde n hasta m ambos ingresados por teclado.
Sumar impares desde n hasta m ambos ingresados por teclado.
Con Funciones :)-50m

--------------------> n hasta m*/
#include <stdio.h>
int pares(int in, int fin)//En la parte superior de las funciones SOLO se rellena con lo que le entra a la funcion es decir con lo que va a trabajar
{
  int i=0, p=0;
  for(i=in; i<=fin; i++)
  {
    if(i%2==0)
    {
      p=p+i;
    }
  }
  return p;
}

int impares(int in, int fin)
{
  int i=0, imp=0;
  for(i=in; i<=fin; i++)
  {
    if(i%2!=0)
    {
      imp=imp+i;
    }
  }
  return imp;
}
int main()
{
  int numinicial, numfinal;
  printf("Ingrese el numero inicial:\n");
  scanf("%d" ,&numinicial);
  printf("Ingrese el numero final:\n");
  scanf("%d" ,&numfinal);
  printf("La suma de los pares es: %d\n" ,pares(numinicial, numfinal));
  printf("La suma de los impares es: %d\n" ,impares(numinicial, numfinal));
  return 0;
}