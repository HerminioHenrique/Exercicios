/*
 *Implemente um programa que recebe dois vetores de inteiros de mesmo tamanho e crie um novo vetor onde os elementos desse novo vetor é soma dos elementos dos dois vetores da seguinte forma: o primeiro elemento do primeiro vetor será somado com o último elemento do segundo vetor, o segundo elemento do primeiro vetor será somado com o penúltimo elemento do segundo vetor, e assim sucessivamente.
 */

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Insira a quantidade de numeros a serem somados: ");
    scanf("%d", &n);
    int vet1[n], vet2[n], soma[n];
    for (i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet2[i]);
    }
    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        soma[i] = vet1[i] + vet2[j];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", soma[i]);
    }
}