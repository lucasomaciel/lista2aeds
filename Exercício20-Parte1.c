/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.  (tabela no livro, página 92 - questão 20)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int idade;

    printf("Digite abaixo a sua idade. \n");

    scanf("%d", &idade);

    //processamento de dados


    //output de dados
    if ((idade >= 5) && (idade <= 7)) {
      printf("Você se enquadra na categoria infantil.");
    }
    else if ((idade >= 8) && (idade <= 10)) {
      printf("Você se enquadra na categoria juvenil.");
    }
    else if ((idade >= 11) && (idade <= 15)) {
      printf("Você se enquadra na categoria adolescente.");
    }
    else if ((idade >= 16) && (idade <= 30)) {
      printf("Você se enquadra na categoria adulto.");
    }
    else if (idade > 30) {
      printf("Você se enquadra na categoria sênior.");
    }
    else {
      printf("Você ainda não possui idade para competir. Continue treinando!");
    }


    return 0;
}