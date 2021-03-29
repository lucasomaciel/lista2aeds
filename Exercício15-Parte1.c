/*Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de investimento, de acordo com o tipo de investimento.
1) Poupança - 3% a.m.
2) Renda Fixa - 4% a.m.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double capital;
    int tp;

    printf("Digite abaixo o valor em reais que pretende investir, e em seguida, o tipo de investimento de acordo como descrito abaixo. \n 1) Poupança. \n 2) Renda Fixa. \n");

    scanf("%lf %d", &capital, &tp);
    
    //processamento de dados
    double rend_pou;
    double rend_rf;

    rend_pou = capital * 1.03;
    rend_rf = capital * 1.04;

    //output de dados
    if (tp == 1) {
      printf("Após um mês rendendo na poupança, o valor corrigido corresponde à %lf reais.", rend_pou);
    }
    else if (tp == 2) {
      printf("Após um mês rendendo em renda fixa, o valor corrigido corresponde à %lf reais.", rend_rf);
    }
    else {
      printf("Digite 1 ou 2 para calcular um dos rendimentos possíveis.");
    }

    return 0;
}
