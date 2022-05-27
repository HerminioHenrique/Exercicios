/*
*Implemente um programa que receba dois vetores de inteiros de mesmo tamanho e troque os elementos entre os dois vetores de índices pares, depois imprima os vetores modificados. 

!OBS: Considere o índice 0 como sendo par.
*/

#include <stdio.h>

int main()
{
    int i, n;
    printf("Insira a quantidade de numeros: ");
    scanf("%d", &n);
    int v1[n], v2[n];
    for (i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            int aux = v1[i];
            v1[i] = v2[i];
            v2[i] = aux;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", v1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", v2[i]);
    }
}