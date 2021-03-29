/*Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração)
(tabela no livro, página 93 - questão 24).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double preco;
    double categ;
    char situ;

    printf("Digite o preço, a categoria e a situação do produto - sendo os dois últimos de acordo como descrito abaixo. \n Categoria: 1 - Limpeza; 2 - Alimentação; 3 - Vestuário. \n Situação: R - Produtos Refrigerados; N - Produtos Não-Refrigerados. \n");

    scanf("%lf", &preco);
    scanf("%lf", &categ);
    scanf("%s", &situ);

    //processamento de dados
    double valor_aumento;
    double imposto;
    double novo_preco;

    if (preco <= 25) {
      if (categ == 1) {
        valor_aumento = preco * 0.05;
      }
      else if (categ == 2) {
        valor_aumento = preco * 0.08;
      }
      else if (categ == 3) {
        valor_aumento = preco * 0.10;
      }
    }
    else if (preco > 25) {
      if (categ == 1) {
        valor_aumento = preco * 0.12;
      }
      else if (categ == 2) {
        valor_aumento = preco * 0.15;
      }
      else if (categ == 3) {
        valor_aumento = preco * 0.18;
      }
    }

    if ((categ == 2) || (situ == 'R')) {
      imposto = preco * 0.05;
    }
    else {
      imposto = preco * 0.08;
    }

    novo_preco = preco + valor_aumento - imposto;

    //output de dados
    if (novo_preco <= 50) {
      printf("O valor do aumento corresponde à %.2lf e os impostos à %.2lf. O novo preço é de %.2lf reais. O produto está barato.", valor_aumento, imposto, novo_preco);
    }
    else if ((novo_preco > 50) && (novo_preco < 120)) {
      printf("O valor do aumento corresponde à %.2lf e os impostos à %.2lf. O novo preço é de %.2lf reais. O produto está com o preço normal.", valor_aumento, imposto, novo_preco);
    }
    else {
      printf("O valor do aumento corresponde à %.2lf e os impostos à %.2lf. O novo preço é de %.2lf reais. O produto está caro.", valor_aumento, imposto, novo_preco);
    }

    return 0;
}