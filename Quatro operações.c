/*
*Faça um programa em C que leia dois números reais e calcule as quatro operações
*básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
*final, o programa deve imprimir os resultados dos cálculos.
*/

#include <stdio.h>

void main()
{
    float num, num2, ad, sub, div, mult;
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    ad = num + num2;
    sub = num - num2;
    div = num / num2;
    mult = num * num2;
    printf("O resultado da adicao dos numeros inseridos e de: %.2f \n", ad);
    printf("O resultado da subtracao dos numeros inseridos e de: %.2f \n", sub);
    printf("O resultado da divisao dos numeros inseridos e de: %.2f \n", div);
    printf("O resultado da multiplicacao dos numeros inseridos e de: %.2f", mult);
}
