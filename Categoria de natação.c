/*
*Numa escola de natação, existe diversas categoria que uma criança pode ser inserida de acordo com sua idade. As categorias existentes estão na tabela abaixo:

*Idade	            Categoria
*Até 3 anos	        Fralda
*Até 5 anos	        Baby
*Até 7 anos	        Kid
*Até 12 anos	    Juvenil
*Até 19 anos	    Jovem
*Acima de 19 anos	Nao permitido
*Implemente um programa que recebe a idade do aluno e imprime a categoria do mesmo.
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Insira sua idade");
    scanf("%d", &age);
    if (age > 19)
    {
        printf("Nao permitido");
    }
    else if (age <= 19 && age > 12)
    {
        printf("Jovem");
    }
    else if (age <= 12 && age > 7)
    {
        printf("Juvenil");
    }
    else if (age <= 7 && age > 5)
    {
        printf("Kid");
    }
    else if (age <= 5 && age > 3)
    {
        printf("Baby");
    }
    else
    {
        printf("Fralda");
    }
}