/*
*O Alquimista descobriu que poderia turbinar a formula do número da juventude, que faz que a pessoa fique mais jovem.

*Essa formula turbinada é a seguinte: Some o peso da pessoa com sua altura. Depois divida o resultado pela idade dela. Some a esse resultado o ano de seu nascimento. Multiplique pelo dia de nascimento. Depois subtraia por 33. E por fim, multiplique pela idade mais 7.

*Implemente um programa que recebe o peso, altura, idade, ano e dia de nascimento e calcula o número da juventude turbinado dessa pessoa.
*/

#include <stdio.h>

int main()
{
    float peso, altura, soma, div, soma2, mult, sub, mult2;
    int idade, ano, dia;
    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira o ano em que voce nasceu: ");
    scanf("%d", &ano);
    printf("Insira o dia em que voce nasceu: ");
    scanf("%d", &dia);
    soma = peso + altura;
    div = soma / idade;
    soma2 = div + ano;
    mult = soma2 * dia;
    sub = mult - 33;
    mult2 = (idade + 7) * sub;
    printf("O resultado foi de: %.2f", mult2);
}