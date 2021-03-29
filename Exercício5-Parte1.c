/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário. 
1) Média entre os números digitados.
2) Diferença do maior pelo menor.
3) Produto entre os números digitados.
4) Divisão do primeiro pelo segundo.
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int a;
    int b;
    int c;
    
    printf("Digite dois números, e em seguida, digite um número que especifique qual operação deseja fazer de acordo com as descritas abaixo: \n 1) Média entre os números digitados. \n 2) Diferença do maior pelo menor. \n 3) Produto entre os números digitados. \n 4) Divisão do primeiro pelo segundo. \n");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //processamento de dados
    double media;
    double diferenca;
    double produto;
    double divisao;
    
    media = ((double)a + (double)b)/2;
    if (a > b) {
        diferenca = a - b;
    }
    else {
        diferenca = b - a;
    }
    produto = a * b;
    divisao = (double)a / (double)b;
    

    
    //output de dados
    if (c == 1) {
        printf("A média entre os números é igual a %lf.", media);
    }
    else if (c == 2) {
        printf("A diferença entre os números é igual a %lf.", diferenca);
    }
    else if (c == 3) {
        printf("O produto entre os números é igual a %lf.", produto);
    }
    else if ((c == 4) && (b != 0)) {
        printf("A divisão do primeiro pelo segundo número é igual a %lf.", divisao);
    }
    else if ((c == 4) && (b == 0)) {
        printf("A divisão não pode ser efetuada, pois a base é igual a 0.");
    }
    else {
        printf("Digite um terceiro número entre 1 e 4 para selecionar uma das operações válidas.");
    }
    
    return 0;
}