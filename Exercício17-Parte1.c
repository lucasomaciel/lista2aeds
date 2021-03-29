/*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    int senha;

    printf("Digite sua senha. \n");

    scanf("%d", &senha);

    //processamento de dados


    //output de dados
    if (senha == 4531) {
      printf("Bem vindo! Seu acesso foi permitido.");
    }
    else {
      printf("Você digitou a senha incorreta. Tente novamente.");
    }
    
    return 0;
}