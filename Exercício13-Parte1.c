/*Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação. (tabela no livro, página 91 - questão 13)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double preco_produto;

    printf("Digite abaixo o preço do produto. \n");

    scanf("%lf", &preco_produto);
    
    //processamento de dados
    //papa: preço após percentual de aumento
    double papa;

    if (preco_produto < 50) {
      papa = preco_produto * (1.05);
    }
    else if ((preco_produto >= 50) && (preco_produto <= 100)) {
      papa = preco_produto * (1.10);
    }
    else {
      papa = preco_produto * (1.15);
    }

    //output de dados
    if (papa < 80) {
      printf("Você gastou, no total, %lf reais. \nO produto foi barato!", papa);
    }
    else if ((papa >= 80) && (papa <= 120)) {
      printf("Você gastou, no total, %lf reais. \nO produto estava com preço normal.", papa);
    }
    else if ((papa > 120) && (papa <= 200)) {
      printf("Você gastou, no total, %lf reais. \nO produto estava caro.", papa);
    }
    else {
      printf("Você gastou, no total, %lf reais. \nO produto estava muito caro!", papa);
    }

    return 0;
}