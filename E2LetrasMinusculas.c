/*Hacer un bucle Do While para imprimir las letras 
minusculas del alfabeto*/

#include <stdio.h>
int main()
{
  int i=0;
  char Abecedario[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z'};
  printf("El abecedario en minusculas es:\n");
  do {
    printf("Letra %d: %c\n",i, Abecedario[i]);
    if (i==25)
    {
      return 0;
    }
     i=i+1;
      }while(1);
}
