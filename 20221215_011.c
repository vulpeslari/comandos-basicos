#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hora_trabalhada, salario_total, IR, INSS, Sindicato, salario_liquido;
    int horas;
    printf("Quanto você ganha por hora? ");
    scanf("%f", &hora_trabalhada);
    printf("Por quantas horas? ");
    scanf("%d", &horas);
    salario_total = hora_trabalhada * horas;
    IR = 0.11 * salario_total;
    INSS = 0.08 * salario_total;
    Sindicato = 0.05 * salario_total;
    salario_liquido = salario_total - IR - INSS - Sindicato;
    printf("Seu salário bruto é de R$ %.2f \nVocê pagou ao INSS o valor de R$ %.2f \nVocê pagou ao Sindicato o valor de R$ %.2f \nSeu salário líquido equivale a R$ %.2f", salario_total, INSS, Sindicato, salario_liquido);
}
