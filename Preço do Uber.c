/*
*O preço da passagem dos aplicativos como o UBER são calculado levando em conta, dentre outras condições, a distância percorrida pelo carro desde o início da viagem.

*Para viagem cuja distância for até 30 KM será cobrado R$ 0.50 por KM. Para viagem acima de 30 Km será cobrado R$ 0.45 por Km.  Sendo que a viagem já começa com um valor base que é de R$ 5.00, ou seja, o valor da viagem será o valor por Km mais o valor base de R$ 5.00.

*Implemente um programa que recebe a distância percorrida por um passageiro e imprima o valor cobrado.
*/

#include <stdio.h>

int main()
{
    float km, valor;
    printf("Insira a distancia percorrida em KM: ");
    scanf("%f", &km);
    if (km <= 30)
    {
        valor = (0.5 * km) + 5;
        printf("O valor da corrida foi de: %f", valor);
    }
    else
    {
        valor = (0.45 * km) + 5;
        printf("O valor da corrida foi de: %f", valor);
    }
}