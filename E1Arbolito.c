
/*Hacer un arbol con * del tipo 
"Digite el numero de filas: 5"
*
**
***
****
*****
*/

#include <stdio.h>
int main()
{
  int filas;
  printf("Digita el numero de filas:\n");
  scanf("%d" ,&filas);
  for (int i=0; i<=filas; i++)
  { 
    printf("\n");
    for (int j=0; j<i; j++)
      {
          printf("*");
      }
    }
    return 0;
}