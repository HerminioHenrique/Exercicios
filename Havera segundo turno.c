/*
*Suponha uma eleição com 3 candidatos e queremos um programa que receba a quantidade de votos de cada candidato e indique se haverá ou não segundo turno.

*Haverá segundo turno numa eleição se a quantidade de votos do primeiro lugar for menor ou igual a metade dos totais de votos.

*O programa irá receber a quantidade de votos dos 3 candidatos. E a saída será Segundo Turno se haverá segundo turno ou Primeiro Turno se não houver o segundo turno.
*/

#include <stdio.h>

int main()
{
    int cand1, cand2, cand3, totalv;
    printf("Digite a quantidade de voto dos 3 candidatos: ");
    scanf("%d %d %d", &cand1, &cand2, &cand3);
    totalv = cand1 + cand2 + cand3;
    if (cand1 > cand2 && cand1 > cand3)
    {
        if (cand1 <= (totalv / 2))
            printf("Segundo Turno");
        else
            printf("Primeiro Turno");
    }
    else if (cand2 > cand1 && cand2 > cand3)
    {
        if (cand2 <= (totalv / 2))
            printf("Segundo Turno");
        else
            printf("Primeiro Turno");
    }
    else if (cand3 > cand2 && cand3 > cand1)
    {
        if (cand3 <= (totalv / 2))
            printf("Segundo Turno");
        else
            printf("Primeiro Turno");
    }
}