/*
*Implemente um programa que recebe o valor do produto e o valor do chute dos jogadores. O jogador que chegar mais perto ganha. Temos dois jogadores.

*Se ambos ficarem à mesma distancia do valor, então houve empate.

*A primeira linha será informado o valor do produto e os chutes jogadores na ordem. A saída deve ser "Primeiro" se o chute do primeiro jogador for o mais próximo do valor do produto ou "Segundo" se o chute do segundo jogador for o mais próximo do valor do produto ou "Empate" caso ambos ficarem à mesma distancia.
*/

#include <stdio.h>

int main()
{
    float precop, chute1, chute2;
    printf("Insira o valor do produto e os chutes dos jogadores: ");
    scanf("%f %f %f", &precop, &chute1, &chute2);
    chute1 = precop - chute1;
    chute2 = precop - chute2;
    if (chute1 > 0 && chute2 > 0)
    {
        if (chute1 < chute2)
            printf("Primeiro");
        else if (chute2 < chute1)
            printf("Segundo");
        else if (chute1 == chute2)
            printf("Empate");
    }
    else if (chute1 < 0 && chute2 < 0)
    {
        if (chute1 > chute2)
            printf("Primeiro");
        else if (chute1 < chute2)
            printf("Segundo");
        else if (chute1 == chute2)
            printf("Empate");
    }
    else if (chute1 > 0 && chute2 < 0){
        chute2 = chute2 * -1; //* Convertendo o valor negativo para positivo, para que assim possa comparar ele com o valor positivo
        if(chute1 < chute2)
            printf("Primeiro");
        else if (chute1 > chute2)
            printf("Segundo");
        else
            printf("Empate");
    }
    else if (chute1 < 0 && chute2 > 0){
        chute1 = chute1 * -1;
        if (chute1 < chute2)
            printf("Primeiro");
        else if (chute1 > chute2)
            printf("Segundo");
        else
            printf("Empate");
    }
}