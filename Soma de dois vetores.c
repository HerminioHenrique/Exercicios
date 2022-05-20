/*
*Implemente um programa que recebe dois vetores de inteiros de mesmo tamanho (não precisa verificar se realmente as duas listas tem o mesmo tamanho, suponha que sim) e crie um novo vetor onde os elementos desse novo vetor é soma dos elementos dos dois vetores, posição a posição. Ou seja, o primeiro elemento desse novo vetor será a soma dos primeiros elementos dos dois vetores. O segundo elemento do novo vetor será a soma dos segundos elementos dos dois vetores. E assim sucessivamente.

!ATENÇÃO: OBRIGATORIAMENTE VOCÊ DEVE CRIAR OS TRÊS VETORES, OS DOIS PRIMEIROS PARA ARMAZENAR OS VETORES DA ENTRADA E O TERCEIRO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO TERCEIRO VETOR.
*/
#include <stdio.h>

int main()
{
    int n, i;
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
    for (i = 0; i < n; i++)
    {
        soma[i] = vet1[i] + vet2[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", soma[i]);
    }
}