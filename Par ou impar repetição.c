#include <stdio.h>

int main()
{
    int num, r;
    printf("Insira a quantidade de repeticoes: ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("O numero inserido e par\n");
        }
        else
            printf("O numero inserido e impar\n");
    }
}