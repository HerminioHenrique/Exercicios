/*
*Implemente um programa que recebe um vetor de inteiros e depois um outro número inteiro que será chamado de chave de busca. Deve-se procurar essa chave dentro do vetor. Se o vetor contém essa chave imprima o índice onde ele se encontra, caso contrário, imprima -1.

*O tamanho do vetor será o primeiro número informado, depois o vetor de inteiros e por fim a chave de busca.
*/

#include <stdio.h>

int main()
{
    int i, n, chaveb, posicao = -1;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("Insira sua chave de busca: ");
    scanf("%d", &chaveb);
    for (i = 0; i < n; i++)
    {
        if (chaveb == vet[i])
            posicao = i;
    }
    printf("%d", posicao);
}