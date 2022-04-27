/*
 *Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o
 *desconto.
 */

#include <stdio.h>

void main()
{
    float pp, desc, pd;
    printf("Insira o valor do produto e o valor do seu desconto (em porcentagem): ");
    scanf("%f %f", &pp, &desc);
    desc = desc / 100;
    pd = (1 - desc) * pp;
    printf("O valor do produto com o desconto aplicado sera de: %.2f", pd);
}
