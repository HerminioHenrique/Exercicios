/*
*Implemente um programa que recebe dois vetores de inteiros de tamanhos possivelmente diferentes e crie um novo vetor onde os elementos desse novo vetor serão a concatenação dos elementos do primeiro vetor com o segundo.

*Vamos com um exemplo. O primeiro vetor tem tamanho 6: [8, 5, 7, 5, 16, 25]. O segundo vetor tem tamanho 4: [78, 5, 25, 49]. O novo vetor obtido pelo concatenação dos dois será: [8, 5, 7, 5, 16, 25, 78, 5, 25, 49].

*Observe que todos os elementos do primeiro vetor foram adicionados no vetor concatenacao nas mesmas posições. Já os elementos do segundo vetor foram adicionados logo após o último elemento do primeiro.

*Você deve imprimir o tamanho desse vetor concatenação e da outra linha os seus elementos.

!ATENÇÃO: OBRIGATORIAMENTE VC DEVE CRIAR OS TRÊS VETORES, OS DOIS PRIMEIROS PARA ARMAZENAR OS VETORES DA ENTRADA E O TERCEIRO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO TERCEIRO VETOR.
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