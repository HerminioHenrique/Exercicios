/*
 *Implemente uma calculadora básica que executa as 4 operações matemáticas básicas : +, -, * ou /.
 * Se a operação não pode ser realizada, imprima "Operacao invalida.
 * Abaixo temos os casos em que a operação não pode ser realiza:
 * 1 - O operador fornecido é diferente de '+', '-', '*' ou '/';
 * 2 - Divisão por zero.
 * Implemente um programa que recebe dois número e um caracter indicando a operação a ser realizada e imprima o resultado da operação.
 * ATENÇÃO: A ordem de entrada dos números indicam a ordem deles na operação. Exemplo: Seja a entrada "12.00 4.00 -" significa a operação "12.00 - 4.00".
 * Obrigatoriamente vocês devem usar um único scanf para receber os dados de eentrada.
 */

#include <stdio.h>

int main()
{
    char operador;
    double resultado, num, num2;
    printf("Insira os dados: ");
    scanf("%lf %lf %c", &num, &num2, &operador);
    if (operador == '+')
    {
        resultado = num + num2;
    }
    else if (operador == '-')
    {
        resultado = num - num2;
    }
    else if (operador == '*')
    {
        resultado = num * num2;
    }
    else if (operador == '/')
    {
        if (num == 0 || num2 == 0)
        {
            printf("Operacao invalida.");
        }
        else
            resultado = num / num2;
    }
    else
        printf("Operacao invalida.");                                                                      // * Caso o sinal do operador for diferente dos sinais passados, o codigo imprime essa linha.
    if (num > 0 && num2 > 0 && (operador == '+' || operador == '-' || operador == '/' || operador == '*')) // * Esse IF existe para não imprimir o resultado mesmo quando a operação for inválida
        printf("O resultado e %.2lf", resultado);
}