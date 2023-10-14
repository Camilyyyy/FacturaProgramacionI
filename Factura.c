#include <stdio.h>
#include <string.h>
int main() {
  char nombre [30];
  char apellido [50];
  char ci [10];
  char ubicacion [50];
  char telefono [10];
  int cantidad;
  int total;
  int precioUnitario;
  char descripcion [20];
  int facturar;
  int nllantas;
  int npastillasDeFreno;
  int nkitEmbrague;
  int nFaro;
  int nRadiador;
  int acumulador;
  int allantas;
  int apastillas;
  int aembrague;
  int afaro;
  int aradiador;
  float descuento;
  
  int i=1;
  printf("Ingrese su nombre:");
  scanf("%s" ,nombre);
  printf("\n");
  printf("Ingrese su apellido:");
  scanf(" %s" ,apellido);
  printf("\nIngrese su numero de cedula:");
  scanf("%s" ,ci);
  printf("\n");
  printf("Ingrese su ubicacion:");
  scanf(" %s" ,ubicacion);
  printf("\nIngrese su numero telefonico:");
  scanf("%s" ,telefono);
  printf("\nQuiere facturar? 1 si 2 no: ");
  scanf("%d" ,&facturar);
  if (facturar==2)
{
  printf("No factura");
 return 0;
}
   do
{
  printf("\n");
  printf("Opciones:\n");
  printf("Llantas(Precio: $150):");
  scanf("%d",&nllantas);
  allantas=150*nllantas;
  printf("\nKit pastillas de freno (Precio: $55): ");
  scanf("%d",&npastillasDeFreno);
  apastillas=55*npastillasDeFreno;
  printf("\nKit de embrague Precio: $180): ");
  scanf("%d",&nkitEmbrague);
  aembrague=180*nkitEmbrague;
  printf("\nFaro (Precio: $70): ");
  scanf("%d",&nFaro);
  afaro=70*nFaro;
  printf("\nRadiador (Precio: $120): ");
  scanf("%d",&nRadiador);
  aradiador=120*nRadiador;
  acumulador=allantas+apastillas+aembrague+afaro+aradiador;
  if (acumulador<=100 && acumulador>=0)
  {
    printf("El total es: \n %d" ,acumulador);
    i=2;
  }
  if (acumulador>=101 && acumulador<=500)
  {
    descuento=(acumulador*95)/100;
    printf("El descuento de su compra es del cinco porciento:  %.2f\n" ,descuento);
    i=2;
  }
    if (acumulador>=501 && acumulador<=999)
  {
    descuento=(acumulador*93)/100;
    printf("El descuento de su compra es del siete porciento:  %.2f\n" ,descuento);
    i=2;
  }
  if (acumulador>=1000)
  {
    descuento=(acumulador*90)/100;
    printf("El descuento de su compra es del diez porciento:  %.2f\n" ,descuento);
    i=2;
  }
 } while (i==1);
  printf("--------------Factura--------------\n");
  printf("Nombre:\t %s\n",nombre);
  printf("Apellido:\t %s\n",apellido);
  printf("Ci:\t %s\n",ci);
  printf("Ubicacion:\t %s\n",ubicacion);
  printf("Telefono:\t %s\n",telefono);
  printf("--------------DETALLE--------------\n");
  printf("\t\tCantidad\t\t\tP/U\n");
  printf("%i\t\tLlantas\t\t\t\t150\n",nllantas);
  printf("%i\t\tPastillasF\t\t\t55\n",npastillasDeFreno);
  printf("%i\t\tKit\t\t\t\t\t24\n",nkitEmbrague);
  printf("%i\t\tFaro\t\t\t\t55\n",nFaro);
  printf("%i\t\tRadiador\t\t\t55\n",nRadiador);
  printf("-----------------------------------\n");
  printf("-\t\tValortotal\t\t\t%i" ,acumulador); 
  printf("\n");
  if (descuento>0)
  {
    printf("-\t\tTotalFinal\t\t\t%.2f" ,descuento);
  }
  return 0;
}