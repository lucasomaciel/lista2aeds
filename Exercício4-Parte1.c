/*Faça um programa que receba três números e mostre o maior.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int a;
    int b;
    int c;
    
    printf("Digite três números: \n");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //processamento
    
    
    //output de dados
    if ((a > b) && (a > c)) {
        printf("O maior número é %d", a);
    }
    else if ((b > a) && (b > c)) {
        printf("O maior número é %d", b);
    }
    else if ((c > a) && (c > b)) {
        printf("O maior número é %d", c);
    }
    else {
        printf("Dois dos números digitados são iguais. Logo, não há um número maior.");
    }
   
   
    return 0;
}