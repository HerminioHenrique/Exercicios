/*
*Implemente um programa que ficará recebendo números inteiros e seu programa deve somar esses números.

*Alternadamente, seu programa irá receber um número para a soma e um comando indicando se deve continuar ou parar.
*/

#include <stdio.h>

int main()
{
    int soma = 0, num, comando = 1;
    while (comando == 1)
    {
        printf("Digite um numero para ser somado: ");
        scanf("%d", &num);
        soma += num;
        printf("Deseja continuar? \n[1] Sim \n[0] Nao\n");
        scanf("%d", &comando);
    }
    printf("O resultado da soma dos numeros digitados e: %d", soma);
}
