#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Lado, Area, Area_Dobro;
    printf("Lado do quadrado:");
    scanf("%f", &Lado);
    Area = Lado * Lado;
    Area_Dobro = 2 * Area;
    printf("O dobro da Area de um quadrado de lado %.2f é: %.4f", Lado, Area_Dobro);
    return 0;
}
