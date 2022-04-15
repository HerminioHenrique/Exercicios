/*
*Implemente um programa que recebe a renda familiar e imprime a classe social segundo o SAE:
*Classificação do governo (SAE)
*Grupo	Renda familiar
*Extremamente pobre	Até R$ 324
*Pobre	Até R$ 648
*Vulneravel	Até R$ 1.164
*Baixa classe media	Até R$ 1.764
*Media classe media	Até R$ 2.564
*Alta classe media	Até R$ 4.076
*Baixa classe alta	Até R$ 9.920
*Alta classe alta	Acima de R$ 9.920
*/

#include <stdio.h>

int main(){
    float renda, classe;
    printf ("Insira sua renda familiar: ");
    scanf("%f", &renda);
    if (renda <= 324){
        printf("Extremamente pobre");
    }
    else if (renda <= 648 && renda > 324){
        printf("Pobre");
    }
    else if (renda <= 1164 && renda > 648){
        printf("Vulneravel");
    }
    else if (renda <= 1764 && renda > 1164){
        printf("Baixa classe media");
    }
    else if (renda <= 2564 && renda > 1764){
        printf("Media classe media");
    }
    else if (renda <= 4076 && renda > 2564){
        printf("Alta classe media");
    }
    else if (renda <= 9920 && renda > 4076){
        printf("Baixa classe alta");
    }
    else{
        printf("Alta classe alta");
    }
}