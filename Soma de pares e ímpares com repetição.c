/*
*Nessa nova versão, a quantidade de números não será fixa em 70 (como na versão 1), mas será informada incialmente, ou seja, será dinâmica. Seja n essa quantidade de números.

*Implemente um programa que recebe uma lista de n números inteiros e calcule a soma dos números que estão nas posições pares e a soma dos números que estão nas posições impares. Imprima a soma dos pares e depois a soma dos impares, na mesma linha.
*/

#include <stdio.h>

int main()
{
    int n, num, somap = 0, somai = 0;
    printf("Insira a quantidade de repeticoes: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
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
    printf("A soma dos numeros que estao nas posicoes pares e de %d. Ja a soma dos que estao nas posicoes impares e de %d.", somap, somai);
}