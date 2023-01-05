#include<stdio.h>
#include <math.h>

int main ()
{

float p1,resultado;


printf ("Digita el precio neto del producto:");
scanf ("%f",&p1);
resultado=(p1*0.16)+p1;
printf ("\n El precio del producto con iva es:%f",resultado);
return 0;

}
