#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Fahrenheit, Celsius;
    printf("Temperatura em Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = ((Celsius * 9)/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f graus", Fahrenheit);
}
