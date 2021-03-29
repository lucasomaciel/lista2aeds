/*Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o novo salário. (tabela no livro, página 92 - questão 14)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double salario_atual;

    printf("Digite em reais seu salário atual para saber quanto irá receber após o reajuste. \n");

    scanf("%lf", &salario_atual);
    
    //processamento de dados
    double novo_salario;

    if (salario_atual <= 300) {
      novo_salario = salario_atual * 1.50;
    }
    else if ((salario_atual > 300) && (salario_atual <= 500)) {
      novo_salario = salario_atual * 1.40;
    }
    else if ((salario_atual > 500) && (salario_atual <= 700)) {
      novo_salario = salario_atual * 1.30;
    }
    else if ((salario_atual > 700) && (salario_atual <= 800)) {
      novo_salario = salario_atual * 1.20;
    }
    else if ((salario_atual > 800) && (salario_atual <= 1000)) {
      novo_salario = salario_atual * 1.10;
    }
    else {
      novo_salario = salario_atual * 1.05;
    }

    //output de dados
    printf("Após o reajuste, seu novo salário será de %lf reais", novo_salario);

    return 0;
}