/*
*Numa lista (spoiler da cadeira de Estrutura de Dados), os elementos estão organizado da seguinte forma, de acordo com sua posição na lista. O primeiro elemento está na posição 1, o segundo elemento está na posição 2, o terceiro elemento está na posição 3 e assim sucessivamente,

*Implemente um programa que recebe uma lista de 70 números inteiros e calcule a soma dos números que estão nas posições pares e a soma dos números que estão nas posições impares. Imprima a soma dos pares e depois a soma dos impares, na mesma linha.
*/

#include <stdio.h>

int main()
{
    int num, somap = 0, somai = 0;
    for (int i = 1; i <= 70; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &num);
        if (i % 2 == 0)
        {
            somap = somap + num;
        }
        else
        {
            somai = somai + num;
        }
    }
    printf("A soma dos numeros que estao nas posicoes pares foi de%d. Ja a soma dos que estao em posicoes impares foi de %d.", somap, somai);
}