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
    for (i = 0; i < n2; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &v2[i]);
    }
    int soma = n1 + n2;
    int uniao[soma];
    for (i = 0; i < n1; i++)
    {
        uniao[j] = v1[i];
    }
    for (i = 0; i < n2; i++)
    {
        uniao[j] = v2[i];
    }
    printf("%d %d", soma, uniao[j]);
}