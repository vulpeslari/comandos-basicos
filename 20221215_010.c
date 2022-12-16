#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Altura, Peso_Ideal;
    printf("Qual sua altura? ");
    scanf("%f", &Altura);
    Peso_Ideal = (72.7 * Altura) - 58;
    printf("Seu peso ideal é %.2f", Peso_Ideal);
}
