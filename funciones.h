#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
int zzzz(int num)
{
  int acu=1;
  for (int i=1; i<=num; i++){
    acu=acu*i;
  }
  return acu;
}
#endif