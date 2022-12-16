#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_hora, salario_total;
    int horas;
    printf("Quanto você ganha por hora trabalhada? ");
    scanf("%f", &salario_hora);
    printf("E quantas horas por dia? ");
    scanf("%d", &horas);
    salario_total = salario_hora * horas;
    printf("O salario total é de R$ %.2f", salario_total);
    return 0;
}
