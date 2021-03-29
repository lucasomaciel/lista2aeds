/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor. (tabela no livro, página 91 - questão 10)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double custo_fixo;

    printf("Digite, em reais, o preço do custo de fábrica para saber o preço de mercado do automóvel.\n");

    scanf("%lf", &custo_fixo);
    
    //processamento de dados
    //cad: custo até doze mil
    //cedv: custo entre doze e vinte cinco mil
    //cav: custo acima de vinte mil
    double cad;
    double cedv;
    double cav;

    cad = custo_fixo * (1.05);
    cedv = custo_fixo * (1.25);
    cav = custo_fixo * (1.35);

    //output de dados
    if (custo_fixo <= 12000) {
      printf("O preço de mercado do automóvel é de %lf reais.", cad);
    }
    else if ((custo_fixo > 12000) && (custo_fixo <=25000)) {
      printf("O preço de mercado do automóvel é de %lf reais.", cedv);
    }
    else {
      printf("O preço de mercado do automóvel é de %lf reais.", cav);
    }

    return 0;
}