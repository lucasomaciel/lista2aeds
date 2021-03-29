/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir: (tabela no livro, página 90 - questão 2)*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int a;
    int b;
    
    printf("Digite aqui suas duas notas: \n");
    
    scanf("%d %d", &a, &b);
    
    //cálculo da média
    double media;
    
    media = (a + b)/2;
    
    //output de dados
    if (media >= 7) {
        printf("Parabéns! Você foi aprovado(a). Sua média do semestre foi %2.f.", media);
    }
    else if (media >= 3 && media < 7) {
        printf("Você foi reprovado(a), mas poderá fazer a prova de recuperação. Sua média do semestre foi %2.f.", media);
    }
    else {
        printf("Você foi reprovado(a), e não poderá fazer a prova de recuperação. Sua média do semestre foi %2.f.", media);
    }
    
    return 0;
}