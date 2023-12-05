
/*Poner todos los multiplos de cinco a n*/
#include <stdio.h>
int main() 
{
  int n, i, c=0;
  printf("Ingrese un numero:\n");
  scanf("%d" ,&n);
  for(i=1; i<=n; i++)
  {
    if(i%5==0){
      c=c+1;
    }
  }
  printf("El numero de multiplos de 5 dentro de n son: %d\n",c );
  return 0;
}