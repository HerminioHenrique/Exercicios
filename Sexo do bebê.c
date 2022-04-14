//*Implemente um programa que recebe o sexo de um bebê que acabou de nascer e imprime Menina ou Menino.

#include <stdio.h>

int main()
{
    char s;
    printf("Digite o sexo do bebe: ");
    scanf("%c", &s);
    if (s == 'F' || s == 'f')
        printf("O bebe e uma menina.");
    else if (s == 'M' || s == 'm')
        printf("O bebe e um menino.");
}