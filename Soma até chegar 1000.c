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