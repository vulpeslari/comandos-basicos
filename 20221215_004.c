#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
   float Raio, Area;
   printf("Raio: ");
   scanf("%f", &Raio);
   Area = pi * (Raio * Raio);
   printf("Para um círculo de raio %.2f, sua área é %.2f", Raio, Area);
}
