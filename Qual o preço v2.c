/*
*O primeiro jogador chuta um valor. O segundo jogador chuta se acha que o valor do produto é maior ou menor que o valor chutado pelo primeiro jogador. O primeiro jogador ganha se ele acertar na mosca ou se o segundo errar a direção do chute. Caso contrário, o segundo ganha.

*Implemente um programa ira receber o valor do produto, depois o chute do primeiro jogador e a escolha do segundo jogador, maior(M) ou menor(m).
*/

#include <stdio.h>

int main(){
    float valorp,chute;
    char chute2;
    printf("Insira o valor do produto, o chute do primeiro jogador e a escolha do segundo jogador, maior(M) ou menor(m): ");
    scanf("%f %f %c",&valorp,&chute,&chute2);
    chute = valorp - chute;
    if ((chute < 0 && chute2 == 'm') || (chute > 0 && chute2 == 'M')){
        printf("Segundo");
    }
    else if ((chute < 0 && chute2 == 'M') || (chute > 0 && chute2 == 'm') || (chute == 0 && chute2 != 0)){
        printf("Primeiro");
    }
}