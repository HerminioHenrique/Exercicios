/*
*Implemente um programa que recebe dois conjuntos (vetores) de inteiros, de tamanhos diferentes e imprima Contido se o primeiro conjunto está contido no segundo (todos os elementos do primeiro estão no segundo) ou Nao contido, caso contrário.

*Primeiro você recebe o tamanho do primeiro conjunto e logo após, recebe os números do primeiro conjunto.

*Depois recebe o tamanho do segundo conjunto e logo após, recebe os números do segundo conjunto.
*/

#include <stdio.h>

int main()
{
    int n1, n2, j, i;
    printf("Insira o tamanho do primeiro conjunto: ");
    scanf("%d", &n1);
    int v1[n1];
    for (i = 0; i < n1; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &v1[i]);
    }
    printf("Insira o tamanho do segundo conjunto: ");
    scanf("%d", &n2);
    int v2[n2];
    for (j = 0; j < n2; j++)
    {
        printf("Insira um numero: ");
        scanf("%d", &v2[j]);
    }
    int qtdcontido = 0;
    for (i = 0; i < n1; i++)
    {
        int contido = 0;
        for (j = 0; j < n2; j++)
        {
            if (v1[i] == v2[j])
            {
                contido = 1;
            }
        }
        if (contido == 1)
        {
            qtdcontido++;
            break;
        }
    }
    if (qtdcontido == n1)
    {
        printf("Contido");
    }
    else
        printf("Nao contido");
}