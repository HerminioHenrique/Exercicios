/*
*O módulo de um número real é calculado seguindo as seguintes regras:
*• O módulo ou valor absoluto de um número real é o próprio número, se ele for positivo.
*• O módulo ou valor absoluto de um número real será o seu simétrico, se ele for negativo.

*Implemente um programa que recebe um número real e imprima seu módulo.
*/

#include <stdio.h>

int main()
{
    int num, modulo;
    float("Insira um numero: ");
    scanf("%f", &num);
    if (num < 0)
        modulo = num * -1;
    else
        modulo = num;
    printf("O modulo do numero e: %.2f", modulo);
}