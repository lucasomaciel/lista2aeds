/*Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))
(tabela no livro, página 94 - questão 25).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int horas_extras;
    int horas_ausentes;

    printf("Digite abaixo quantas horas extras você trabalhou e em seguida, quantas horas esteve ausente. \n");

    scanf("%d", &horas_extras);
    scanf("%d", &horas_ausentes);

    //processamento de dados
    double h;

    //h está em horas, *60 p/ converter à minutos
    h = 60 * (horas_extras - ((2/3) * horas_ausentes));

    //output de dados
    if (h < 600) {
      printf("Você receberá uma gratificação de R$100,00. Obrigado pelos serviços prestados no último ano!");
    }
    else if ((h >= 600) && (h < 1200)) {
      printf("Você receberá uma gratificação de R$200,00. Obrigado pelos serviços prestados no último ano!");
    }
    else if ((h >= 1200) && (h < 1800)) {
      printf("Você receberá uma gratificação de R$300,00. Obrigado pelos serviços prestados no último ano!");
    }
    else if ((h >= 1800) && (h < 2400)) {
      printf("Você receberá uma gratificação de R$400,00. Obrigado pelos serviços prestados no último ano!");
    }
    else {
      printf("Você receberá uma gratificação de R$500,00. Obrigado pelos serviços prestados no último ano!");
    }

    return 0;
}