#include <stdio.h>
#include <stdlib.h>

int main()
{
    float CM, M;
    printf("Valor em centimetros: ");
    scanf("%f", &CM);
    M = CM/100;
    printf("Valor em metros: %f", M);
}
