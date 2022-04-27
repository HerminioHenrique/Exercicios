/*
*Faça um programa em C que calcule o valor de uma prestação em atraso. Para
*isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros
*e o período de atraso. Ao final, o programa deve imprimir o valor da prestação
*atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso,
*o valor da prestação acrescido dos juros. Considere juros simples.
*/

#include <stdio.h>

void main()
{
    float pv, tpj, pa, paf, j;
    printf("Insira o valor da prestacao vencida: ");
    scanf("%f", &pv);
    printf("Agora, insira o valor da taxa mensal de juros: ");
    scanf("%f", &tpj);
    printf("Por ultimo, informe o periodo em atraso, em dias: ");
    scanf("%f", &pa);
    printf("O valor incial da prestacao vencida era de: %.2f \n", pv);
    printf("Essa prestacao atrasou %.2f dias.", pa);
    tpj = tpj / 100;
    j = tpj * pa * pv;
    paf = pv + j;
    printf("Voce pagara %.2f reais de juros.", j);
    printf("No total, voce pagara %.2f reais.", paf);
}
