/*
*Implemente um programa que irá receber do usuário n números inteiros e determine o menor e o maior destes números e quantas vezes eles ocorrem.

*Vejamos um exemplo. Vamos receber como valor de n = 6. Em seguida os 6 números inteiros: 9 4 15 28 4 7. O menor e maior valor são 4 e 28, respectivamente. Eles aparecem 2 e 1 vez no vetor.

*Imprima essas duas duplas no formato (ocorrência, valor). No exemplo acima deve imprimir: (2,4) (1,28).
*/

#include <stdio.h>

int main()
{
    int i, r, maior = 0, menor = 0, maiorp = 0, menorp = 0;
    printf("Insira a quantidade de numeros: ");
    scanf("%d", &r);
    int vet[r];
    for (i = 0; i < r; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet[i]);
        if (menor == 0 || vet[i] < menor)
            menor = vet[i];
        if (menor == 0 || vet[i] > maior)
            maior = vet[i];
    }
    for (i = 0; i < r; i++)
    {
        if (vet[i] == maior)
            maiorp++;
        if (vet[i] == menor)
            menorp++;
    }
    printf("(%d,%d) (%d,%d)", menorp, menor, maiorp, maior);
}