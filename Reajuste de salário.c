/*
*Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
*isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
*reajuste. Ao final imprimir o valor do novo salário.
*/

#include <stdio.h>

void main()
{
    float sa, pr, sr;
    printf("Insira o salario a ser reajustado: ");
    scanf("%f", &sa);
    printf("Agora, digite o percentual de ajuste: ");
    scanf("%f", &pr);
    pr = pr / 100;
    sr = (pr * sa) + sa;
    printf("O salario reajustado e: %f", sr);
}
