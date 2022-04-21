/*
*Existem duas formas de classificar os triângulos, que são independentes entre si. Uma delas leva em consideração o comprimento de cada lado do triangulo.

*Sabemos que três números representam os comprimentos dos lados de um triângulo quando a soma de dois números sempre é maior ou igual ao terceiro, isso para qualquer dois números.

*Escreva um programa que receba três números inteiros e verifique se esses números representam os comprimento dos lados de um triângulo. Caso positivo, verifique qual tipo de triângulo ele representa e imprima o seguinte código de acordo com cada tipo: equilátero (EQ), isósceles (IS), escaleno (ES). Caso ele não represente um triângulo, imprima NT.
*/

#include <stdio.h>

int main()
{
    int num, num2, num3;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    printf("Insira outra numero inteiro: ");
    scanf("%d", &num2);
    printf("Insira o ultimo numero: ");
    scanf("%d", &num3);
    if (num + num2 >= num3 && num2 + num3 >= num && num + num3 >= num2)
    {
        if (num == num2 && num2 == num3)
            printf("EQ");
        else if ((num == num2 && num2 != num3) || (num3 == num2 && num2 != num) || (num == num3 && num3 != num2))
            printf("IS");
        else
            printf("ES");
    }
    else
        printf("NT");
}