//*Em muitas situações do dia a dia, é necessário converter um tempo em segundos para horas e minutos. Implemente um programa que recebe um tempo em segundos e transformar no formato: Hora:Minuto:Segundo

#include <stdio.h>

int main()
{
    int temps, horas, min, seg;
    printf("Insira o tempo em segundos: ");
    scanf("%d", &temps);
    horas = temps / 3600;
    temps = temps % 3600;
    min = temps / 60;
    seg = temps % 60;
    printf("Esses segundos equivalem a %d:%d:%d horas.", horas, min, seg);
}