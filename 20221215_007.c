#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Fahrenheit, Celsius;
    printf("Temperatura em Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    Celsius = (5 * (Fahrenheit - 32))/9;
    printf("Temperatura em Celsius: %d graus", Celsius);
}
