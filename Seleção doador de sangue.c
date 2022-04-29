/*
*Uma pessoa para se tornar doadora, ela precisa responder a um questionário. Dependendo das respostas do questionário, a pessoa pode doar ou não.

*No questionário a pessoa vai informar seu peso, sua idade e se estar bem alimentado e se tem sintomas de resfriado/gripado.

*Uma pessoa estará apta a ser doadora se pesar pelo menos 50 kg, se tiver idade entre 16 e 69,  estiver bem alimentado e não está com sintomas de resfriado/gripe.

*Implemente um programa que recebe as respostas do questionário e diga se a pessoa está apto ou não a ser doadora. 
*/

#include <stdio.h>

int main(){
    float peso;
    int age,gripado,alimentado;
    printf("Insira seu peso, idade e se voce esta gripado: ");
    scanf("%f %d %d %d",&peso,&age,&gripado,&alimentado);
    if (peso >= 50 && (age >= 16 && age <= 69)&& gripado == 1 && alimentado == 0){
        printf("Esta Apto");
    }
    else
        printf("Nao Esta Apto");
}