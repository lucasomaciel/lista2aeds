/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double a;
    double b;
    int c;

    printf("Digite dois números e em seguida, selecione qual das seguintes operações quer efetuar digitando o respectivo número. \n As opções são: \n 1) O primeiro número elevado ao segundo número. \n 2) Raiz quadrada do primeiro número. \n 3) Raiz quadrada do segundo número. \n 4) Raiz cúbica do primeiro número. \n 5) Raiz cúbica do segundo número. \n");

    scanf("%lf %lf %d", &a, &b, &c);
    
    //processamento de dados
    double potencia;
    double raiz_quad_a;
    double raiz_quad_b;
    double raiz_cub_a;
    double raiz_cub_b;

    potencia = pow(a, b);
    raiz_quad_a = sqrt(a);
    raiz_quad_b = sqrt(b);
    raiz_cub_a = cbrt(a);
    raiz_cub_b = cbrt(b);
    
    //output de dados
    if (c == 1) {
      printf("%lf elevado a %lf é igual a %lf.", a, b, potencia);
    }
    else if (c == 2) {
      printf("A raiz quadrada de %lf é igual a %lf", a, raiz_quad_a);
    }
    else if (c == 3) {
      printf("A raiz quadrada de %lf é igual a %lf", b, raiz_quad_b);
    }  
    else if (c == 4) {
      printf("A raiz cúbica de %lf é igual a %lf", a, raiz_cub_a);
    }
    else if (c == 5) {
      printf("A raiz cúbica de %lf é igual a %lf", b, raiz_cub_b);
    }
    else {
      printf("Selecione uma das operações possíveis entre 1 e 5.");
    }

    return 0;
}