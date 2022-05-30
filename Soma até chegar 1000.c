/*
*Implemente um programa que ficará recebendo números inteiros até que a soma desses números seja maior ou igual a 1000. Imprima o valor da soma.

*A quantidade de números é desconhecida, a única informação que você tem é que quando a soma superar 1000, o usuário irá para de informar números.

!Obrigatoriamente você deve usar WHILE!
*/

#include <stdio.h>

int main()
{
    int soma = 0, num;
    while (soma >= 1000)
    {
        printf("Digite os numeros que serao somados: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("O resultado da soma dos numeros digitados e: %d", soma);
}