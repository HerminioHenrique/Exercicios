/*
 *No Janken-pon, os jogadores devem simultaneamente esticar a mão, na qual cada um formou um simbolo (que significa pedra, papel ou tesoura). Então, os jogadores comparam os símbolos para decidir quem ganhou, da seguinte forma:

*Pedra ganha da tesoura (amassando-a ou quebrando-a).
*Tesoura ganha do papel (cortando-o).
*Papel ganha da pedra (embrulhando-a).
*Caso dois jogadores façam o mesmo gesto, ocorre um empate.

*Suponha que Pedra = 1, Tesoura = 2 e Papel = 3

*O programa irá receber dois números representando a jogada dos jogadores e deve dizer quem ganhou.
*/

#include <stdio.h>

int main()
{
    int num, num2;
    printf("Jogue pedra, papel ou tesoura, sendo: \n[1] Pedra \n[2] Papel \n[3] Tesoura \n");
    scanf("%d", &num);
    printf("\nJogue pedra, papel ou tesoura, sendo: \n[1] Pedra \n[2] Papel \n[3] Tesoura \n");
    scanf("%d", &num2);
    if (num == num2)
        printf("\nEmpate.\n");
    else if ((num == 1 && num2 == 2) || (num == 2 && num2 == 1))
        printf("\nPapel ganhou\n");
    else if ((num == 2 && num2 == 3) || (num == 3 && num2 == 2))
        printf("\nTesoura ganhou.\n");
    else
        printf("\nPedra ganhou.\n");
}