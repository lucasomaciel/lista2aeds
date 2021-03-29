/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int a;
    int b;
    int c;
    int d;
    
    printf("Digite aqui suas quatro notas: \n");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //cálculo da média
    double media;
    
    media = (a + b + c + d)/4;
    
    //output de dados
    if (media >= 7) {
        printf("Parabéns! Você foi aprovado(a). Sua média do semestre foi %2.f.", media);
    }
    else {
        printf("Você foi reprovado(a). Sua média do semestre foi %2.f.", media);
    }
    
    return 0;
}