//*Implemente um programa que recebe um dos seguintes caracteres dos operadores matemático e digite o nome do operador: +, -, *, /, %. Caso o caracter informado não seja nenhum dos 5 operadores, imprima NDA.

#include <stdio.h>

int main()
{
    char caractere;
    printf("Insira um caractere: ");
    scanf("%c", &caractere);
    if (caractere == '+')
        printf("Soma.");
    else
    {
        if (caractere == '-')
            printf("Subtracao");
        else
        {
            if (caractere == '*')
                printf("Multiplicacao");
            else if (caractere == '/')
                printf("Divisao");
        }
    }
}