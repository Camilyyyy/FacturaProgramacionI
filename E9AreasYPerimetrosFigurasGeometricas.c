/*Areas y perimetros de 6 figuras geometricas con funciones*/
/*circulo, cuadrado, rectangulo, triangulo, rombo, trapecio*/
#include <stdio.h>
#include <math.h>

float cuadradoPerimetro(float lado)
{
  float l;
  l=pow(lado, 2);
  return l;
}
float cuadradoArea(float lado)
{
  float l;
  l=(4*lado);
  return l;
}

float rectanguloPerimetro(float ladoA, float ladoB)
{
  float l;
  l=(2*(ladoA+ladoB));
  return l;
}
float rectanguloArea(float ladoA, float ladoB)
{
  float l;
  l=(ladoA*ladoB);
  return l;
}

float trianguloPerimetro(float ladoA, float ladoB, float ladoC)
{
  float l;
  l=(ladoA+ladoB+ladoC);
  return l;
}
float trianguloArea(float base, float altura)
{
  float l;
  l=(base*altura)/2;
  return l;
}

float circuloPerimetro(float radio)
{
  float l, pi;
  pi=3.1416;
  l=2*(pi*radio);
  return l;
}
float circuloArea(float radio)
{
  float l, pi;
  pi=3.1416;
  l=pi*pow(radio, 2);
  return l;
}

float romboPerimetro(float lado)
{
  float l;
  l=(4*lado);
  return l;
}
float romboArea(float diagonal1, float diagonal2)
{
  float l;
  l=(diagonal1*diagonal2)/2;
  return l;
}

float trapecioPerimetro(float ladoA, float ladoB, float ladoC)
{
  float l;
  l=(2*ladoA)+ladoB+ladoC;
  return l;
}
float trapecioArea(float BaseMayor, float BaseMenor, float altura)
{
  float l;
  l=((BaseMayor+BaseMenor)*altura)/2;
  return l;
}

int main()
{
  int opcion;
  float ladoCuadrado, RectladoA, RectladoB;
  float triladoA, triladoB, triladoC, triBase, triAltura, CirRadio;
  float romboLado, diagonal1, diagonal2;
  float traLadoA, traLadoB, traLadoC, traBaseMayor, traBaseMenor, traAltura;
  printf("Elija la opcion que quiera\n");
  printf("1- Cuadrado\n");
  printf("2- Rectangulo\n");
  printf("3- Triangulo\n");
  printf("4- Circulo\n");
  printf("5- Rombo\n");
  printf("6- Trapecio\n");
  scanf("%d" ,&opcion);
  switch(opcion)
  {
    case 1: //Cuadrado
      printf("Cuadrado:\n");
      printf("Perimetro del cuadrado:\n");
      printf("Ingrese el lado del cuadrado:\n");
      scanf("%f" ,&ladoCuadrado);
      printf("El perimetro es: %.2f\n" ,cuadradoPerimetro(ladoCuadrado));
      printf("Area del cuadrado:\n");
      printf("El area es: %.2f\n" ,cuadradoArea(ladoCuadrado));
    break;
    
    case 2: //Rectangulo
    printf("Rectangulo:\n");
    printf("Perimetro del rectangulo:\n");
    printf("Ingrese el primer lado del rectangulo:\n");
    scanf("%f" ,&RectladoA);
    printf("Ingrese el segundo lado del rectangulo:\n");
    scanf("%f" ,&RectladoB);
    printf("El perimetro es: %.2f\n" ,rectanguloPerimetro(RectladoA, RectladoB));
    printf("Area del rectangulo:\n");
    printf("El area es: %.2f\n" ,rectanguloArea(RectladoA, RectladoB));
    break;
    
    case 3: //Triangulo
    printf("Triangulo:\n");
    printf("Perimetro del triangulo:\n");
    printf("Ingrese el primer lado del triangulo:\n");
    scanf("%f" ,&triladoA);
      printf("Ingrese el segundo lado del triangulo:\n");
      scanf("%f" ,&triladoB);
      printf("Ingrese el tercer lado del triangulo:\n");
      scanf("%f" ,&triladoC);
    printf("El perimetro es: %.2f\n" ,trianguloPerimetro(triladoA, triladoB, triladoC));
    printf("Area del triangulo:\n");
      printf("Ingrese la base del triangulo:\n");
      scanf("%f" ,&triBase);
        printf("Ingrese la altura del triangulo:\n");
        scanf("%f" ,&triAltura);
    printf("El area es: %.2f\n" ,trianguloArea(triBase, triAltura));
    break;

    case 4: //Circulo
    printf("Circulo:\n");
    printf("Perimetro del Circulo:\n");
    printf("Ingrese el radio del circulo:\n");
    scanf("%f" ,&CirRadio);
    printf("El perimetro es: %.2f\n" ,circuloPerimetro(CirRadio));
    printf("Area del Circulo:\n");
    printf("El area es: %.2f\n" ,circuloArea(CirRadio));
    break;

    case 5: //Rombo
    printf("Rombo:\n");
    printf("Perimetro del Rombo:\n");
    printf("Ingrese el lado del rombo:\n");
    scanf("%f" ,&romboLado);
    printf("El perimetro es: %.2f\n" ,romboPerimetro(romboLado));
    printf("Area del Rombo:\n");
      printf("Ingrese la primera diagonal del rombo:\n");
      scanf("%f" ,&diagonal1);
      printf("Ingrese la segunda diagonal del rombo:\n");
      scanf("%f" ,&diagonal2);
    printf("El area es: %.2f\n" ,romboArea(diagonal1, diagonal2));
    break;

    case 6: //Trapecio
    printf("Trapecio:\n");
    printf("Perimetro del Trapecio:\n");
    printf("Ingrese el lado A del trapecio:\n");
    scanf("%f" ,&traLadoA);
      printf("Ingrese el lado B del trapecio:\n");
      scanf("%f" ,&traLadoB);
      printf("Ingrese el lado C del trapecio:\n");
      scanf("%f" ,&traLadoC);
    printf("El perimetro es: %.2f\n" ,trapecioPerimetro(traLadoA, traLadoB, traLadoC));
    printf("Area del Trapecio:\n");
      printf("Ingrese la base mayor del trapecio:\n");
      scanf("%f" ,&traBaseMayor);
      printf("Ingrese la base menor del trapecio:\n");
      scanf("%f" ,&traBaseMenor);
      printf("Ingrese la altura del trapecio:\n");
      scanf("%f" ,&traAltura);
    printf("El area es: %.2f\n" ,trapecioArea(traBaseMayor, traBaseMenor, traAltura));
    break;
    default: printf("Valor incorrecto");
  }
  return 0;
}