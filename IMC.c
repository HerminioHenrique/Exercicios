/*
*Leia do usuário o peso em quilos e a altura em metros de um adulto, calcule o Índice de Massa Corporal (IMC) correspondente e imprima uma frase indicando a situação ("muito abaixo do peso", "abaixo do peso", "peso normal", "acima do peso", "obesidade", "obesidade severa" e "obesidade mórbida").

*O cálculo do IMC é dado pela expressão peso/altura². A tabela das situações correspondentes ao IMC é dada a seguir:

*Abaixo de 17	muito abaixo do peso
*Entre 17 e 18.49	abaixo do peso
*Entre 18.5 e 24.99	peso normal
*Entre 25 e 29.99	acima do peso
*Entre 30 e 34.99	obesidade
*Entre 35 e 39.99	obesidade severa
*Acima de 40	obesidade morbida
*/
#include <stdio.h>

int main()
{
    float peso,imc,altura;
    printf("Insira seu peso em KG e sua altura em METROS: ");
    scanf("%f %f %f",&peso,&altura,&imc);
    imc = peso / (altura*altura);
    if (imc  < 17){
        printf("Muito abaixo do peso");
    }
    else if (imc >= 17 && imc <= 18.49){
        printf("Abaixo do peso");
    }
    else if (imc >=18.5 && imc <= 24.99){
        printf("Peso normal");
    }
    else if (imc >= 25 && imc <= 29.99){
        printf("Acima do peso");
    }
    else if (imc >= 30 && imc <= 34.99){
        printf("Obesidade");
    }
    else if(imc >= 35 && imc <= 39.99){
        printf("Obesidade severa");
    }
    else
        printf("Obesidade morbida");
}