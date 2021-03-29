/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double salario;
    
    printf("Digite aqui o seu salário: ");

    scanf("%lf", &salario);
    
    //processamento de dados
    double reajuste;
    double novo_salario;

    reajuste = salario * (0.30);
    novo_salario = salario * (1.30);

    //output de dados
    if (salario < 500) {
      printf("Após um reajuste de %lf, você agora receberá %lf.", reajuste, novo_salario);
    }
    else {
      printf("O reajuste só acontecerá para os funcionários que recebem abaixo de 500 reais. Seu salário segue sendo %lf", salario);
    }

    return 0;
}