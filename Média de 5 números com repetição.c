#include <stdio.h>

int main()
{
    int num, r;
    float soma = 0;
    printf("Insira a quantidade de repeticoes: ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    float media = soma / r;
    printf("O resultado da soma dos numeros inseridos e de: %d\n", soma);
    printf("A media dos numeros inseridos e: %.2f", media);
}   