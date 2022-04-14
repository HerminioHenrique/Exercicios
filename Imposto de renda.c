/*
*Implemente um programa que irá calcular o valor do imposto de renda a ser pago por uma pessoa física ou jurídica.

*Se for uma pessoa física, será fornecido o total do ganho do ano. Se o ganho anual for menor ou igual a 13 mil, essa pessoa é isenta de pagar, ou seja, o valor do imposto é zero. Se o ganho anual for acima de 13 mil, o valor do imposto é 15% do ganho.

*Se for uma pessoa jurídica, será fornecido o lucro anual da empresa e o valor desconto. O imposto será 25% do lucro menos o desconto fornecido.

*O programa irá receber o tipo de pessoa, sendo F para física e J para jurídica. E depois, dependendo do tipo de pessoa, irá receber o ganho anual (pessoa física) ou o lucro anual e desconto (pessoa jurídica).
*/

#include <stdio.h>

int main()
{
    char pfj;
    float ganhototal, imposto, desconto;
    printf("Insira F para pessoa fisica e J para juridica: ");
    scanf("%c", &pfj);
    if (pfj == 'F')
    {
        printf("Insira o total ganho no ano: ");
        scanf("%f", &ganhototal);
        if (ganhototal <= 13000)
            printf("Voce esta isento de pagar o imposto de renda.");
        else
        {
            imposto = 0.15 * ganhototal;
            printf("Voce devera pagar %.2f de imposto.", imposto);
        }
    }
    else
    {
        printf("Insira o lucro anual da empresa: ");
        scanf("%f", &ganhototal);
        printf("Insira o valor do desconto recebido: ");
        scanf("%f", &desconto);
        imposto = 0.25 * ganhototal - desconto;
        printf("Voce devera pagar %.2f de imposto de renda.", imposto);
    }
}