/*
*Faça um programa em C que efetue a apresentação do valor da conversão em
*real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
*valor da cotação do dólar.
*/

#include <stdio.h>

void main()
{
    float cotacao, brl, dolar;
    printf("Insira aqui a cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    printf("Agora, digite quantos dolares voce possui: ");
    scanf("%f", &dolar);
    brl = dolar * cotacao;
    printf("Voce tem %.2f reais.", brl);
}
