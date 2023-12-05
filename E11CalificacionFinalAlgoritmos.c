
/*Un alumno desea saber cual sera su calificacion final en la materia de algoritmos. Dicha calificacion se compone del 55% del promedio de sus tres calificaciones parciales, 30% de la calificacion del examen final y el 15% de la calificacion de un trabajo final*/
#include <stdio.h>
int main()
{
  float par1, par2, par3, examFinal, traFinal, proCalif, proExamF, proCalF, proFinal;
  printf("Ingrese la calificacion del primer parcial\n");
  scanf("%f",&par1);
  printf("Ingrese la calificacion del segundo parcial\n");
  scanf("%f",&par2);
  printf("Ingrese la calificacion del tercer parcial\n");
  scanf("%f",&par3);
  printf("Ingrese la calificacion del examen final\n");
  scanf("%f",&examFinal);
  printf("Ingrese la calificacion del trabajo final\n");
  scanf("%f",&traFinal);
  
  proCalif=((par1+par2+par3)/3)*0.55;
  proExamF=(examFinal*0.30);
  proCalF=(traFinal*0.15);
  proFinal=(proCalif+proExamF+proCalF);
  printf("Su calificacion final es: %.2f\n" ,proFinal);
  return 0;
}