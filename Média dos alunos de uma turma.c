/*
*Implemente um programa que irá calcular a média dos alunos de um turma com n alunos, com o valor de n informado pelo usuário.

*O programa irá receber a nota da AP1 dos alunos e  depois a nota da AP2 dos alunos. O programa irá calcular e imprime a média desses n alunos.

!ATENÇÃO: É obrigatório usar três vetores.

*Dois vetores para armazenar as notas das APs, cada vetor representando uma AP, e o terceiro para armazenar a média dos alunos.

*OBS: Use o tipo float para os vetores.

*O primeiro valor será a quantidade de números.

*Depois será fornecido a nota dos alunos da AP1.

*Depois será fornecido a nota dos alunos da AP2.
*/
#include <stdio.h>

int main()
{
    int i, n;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);
    float ap1[n], ap2[n], media[n];
    for (i = 0; i < n; i++)
    {
        printf("Insira as notas da AP1: ");
        scanf("%f", &ap1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Insira as notas da AP2: ");
        scanf("%f", &ap2[i]);
    }
    for (i = 0; i < n; i++)
    {
        media[i] = (ap1[i] + ap2[i]) / 2;
    }
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", media[i]);
    }
}