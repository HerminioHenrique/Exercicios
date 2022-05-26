/*
 *Implemente um programa que irá receber do usuário a quantidade de alunos de uma turma e depois a nota de cada aluno. Seu programa deve calcular a média da turma e contar quantos alunos obtiveram nota maior ou igual que a média da turma. Seu programa deve imprimir a quantidade de alunos com nota maior que a média e depois a média da turma com duas casas decimais.
 */

#include <stdio.h>

int main()
{
    int i, n, maiorm;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);
    float notas[n], media, soma = 0;
    for (i = 0; i < n; i++)
    {
        printf("Insira a nota do aluno: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / n;
    for (i = 0; i < n; i++)
    {
        if (notas[i] >= media)
            maiorm++;
    }
    printf("A media da turma foi %.2f e %d alunos conseguiram uma nota maior ou igual a essa media.", media, maiorm);
}