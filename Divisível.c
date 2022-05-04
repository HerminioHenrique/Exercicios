/*
 *Implemente um programa que irá receber um inteiro do usuário e imprima "Sim" se esse inteiro for divisível por 5 e por 3, ou se não for divisível por 7. Caso contrário imprima "Nao".
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if ((num % 5 == 0) && (num % 3 == 0) || (num % 7 != 0))
    {
        printf("Sim");
    }
    else
        printf("Nao");
}