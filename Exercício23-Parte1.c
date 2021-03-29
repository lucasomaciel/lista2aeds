/*Faça um programa que receba:
■ o código do produto comprado; e
■ a quantidade comprada do produto.
Calcule e mostre:
■ o preço unitário do produto comprado, seguindo a Tabela I;
■ o preço total da nota;
■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■ o preço final da nota depois do desconto.
(tabelas no livro, página 93 - questão 23)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int codigo;
    double quant;

    printf("Digite abaixo o código do produto e a quantidade consumida. \n");

    scanf("%d %lf", &codigo, &quant);

    //processamento de dados
    double preco_unit;
    double preco_total;
    double desconto;
    double preco_final;

    if ((codigo >= 1) && (codigo <= 10)) {
      preco_unit = 10;
    }
    else if ((codigo >= 11) && (codigo <= 20)) {
      preco_unit = 15;
    }
    else if ((codigo >= 21) && (codigo <= 30)) {
      preco_unit = 20;
    }
    else if ((codigo >= 31) && (codigo <= 40)) {
      preco_unit = 30;
    }

    preco_total = preco_unit * quant;

    if (preco_total < 250) {
      desconto = preco_total * 0.05;
    }
    else if ((preco_total >= 250) && (preco_total <= 500)) {
      desconto = preco_total * 0.10;
    }
    else if (preco_total > 500) {
      desconto = preco_total * 0.15;
    }

    preco_final = preco_total - desconto;

    //output de dados
    printf("O preço unitário do produto é equivalente à %.2lf reais. \n", preco_unit);
    printf("O preço total é equivalente à %.2lf reais. \n", preco_total);
    printf("O desconto equivale à %.2lf reais. \n", desconto);
    printf("O preço final equivale à %.2lf reais.", preco_final);

    return 0;
}