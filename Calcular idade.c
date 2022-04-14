//*Implemente um programa que calcula a idade de uma pessoa. Seu programa irá receber a data de nascimento da pessoa e a data atual. As datas fornecidas estão no formato dd/MM/yyyy. Esse formato de data significa dia/mês/ano, onde o dia e o mês terão dois dígitos e o ano 4. Imprima a idade da pessoa.

#include <stdio.h>

int main()
{
    int dia, mes, ano, diatual, mesatual, anoatual, idade;
    char barra;
    printf("Insira sua data de nascimento: ");
    scanf("%d%c%d%c%d", &dia, &barra, &mes, &barra, &ano);
    printf("Insira o dia atual: ");
    scanf("%d%c%d%c%d", &diatual, &barra, &mesatual, &barra, &anoatual);
    if (diatual >= dia && mesatual >= mes)
        idade = anoatual - ano;
    else{
        if (diatual < dia && mesatual > mes){
            idade = anoatual - ano;
        }
        else
        idade = (anoatual - ano) - 1;
    }
    printf("Voce tem %d anos.", idade);
}