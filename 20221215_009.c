#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    float C, Produto, Soma, Potencia;
    printf("Numero inteiro A: ");
    scanf("%d", &A);
    printf("Numero inteiro B: ");
    scanf("%d", &B);
    printf("Numero real C: ");
    scanf("%f", &C);
    Produto = (2 * A) * (B / 2);
    Soma = (3 * A) + C;
    Potencia = C * C * C;
    printf("O produto do dobro de A com metade de B é %.2f \nA soma do triplo de A com C é %.2f \n C elevado ao cubo é %.2f", Produto, Soma, Potencia);
}
