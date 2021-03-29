/*A PUC possui regras muito claras sobre a aprovação e reprovação de alunos. Suponha que uma
disciplina possua o seguinte processo de avaliação:
• Total de aulas do semestre.
• Total de faltas do semestre.
• Nota de exercícios e trabalhos (25 pontos).
• Notas de avaliações (3 provas de 25 pontos cada).
• Nota de reavaliação (25 pontos).
Para saber se um aluno foi aprovado ele tem que obedecer aos seguintes requisitos:
1. O aluno deve obter pelo menos 75% de frequência.
2. A nota final do semestre deve ser superior ou igual a 60 pontos.
3. Caso a nota final seja inferior a 60 pontos, o aluno fará uma reavaliação, que deverá substituir
a menor nota entre as avaliações.
Desenvolva um algoritmo que, dados o Código da disciplina, total de aulas no semestre, total de
faltas no semestre, nota de exercícios e trabalhos, notas das três avaliações e a nota da reavaliação
(se houver), determine se aluno foi aprovado ou reprovado.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //input de dados
    double total_aulas;
    double ausencias;
    double nota_trab;
    double nota_avaliacao1;
    double nota_avaliacao2;
    double nota_avaliacao3;
    double nota_reavaliacao;

    printf("Digite o número total de aulas: ");
    scanf("%lf", &total_aulas);
    if (total_aulas <= 0) {
        printf("Erro: o número total de aulas não pode ser menor ou igual a 0.\n");
        return 0;
    }
    printf("Digite o total de ausências: ");
    scanf("%lf", &ausencias);
    if ((ausencias < 0) || (ausencias > total_aulas)) {
        printf("Erro: o número de ausências não pode ser menor que 0 ou superior ao número de aulas.\n");
        return 0;
    }
    printf("Digite a nota dos trabalhos: ");
    scanf("%lf", &nota_trab);
    if (nota_trab > 25) {
      printf("Erro: a nota dos trabalhos e exercícios não pode ser superior a 25.\n");
    }
    printf("Digite a nota que obteve nas três avaliações: ");
    scanf("%lf", &nota_avaliacao1);
    scanf("%lf", &nota_avaliacao2);
    scanf("%lf", &nota_avaliacao3);
    if ((nota_avaliacao1 > 25) || (nota_avaliacao2 > 25) || (nota_avaliacao3 > 25)) {
      printf("Erro: as notas de avaliação não podem ser superiores a 25.");
    }
    printf("Se tiver feito a prova de reavaliação, digite que nota obteve: ");
    scanf("%lf", &nota_reavaliacao);
    if (nota_reavaliacao > 25) {
      printf("Erro: as notas de avaliação não podem ser superiores a 25.");
    }

    //processamento de dados
    double frequencia;
    double nota_final;
    
    frequencia = (total_aulas - ausencias) / total_aulas;
    nota_final = nota_trab + nota_avaliacao1 + nota_avaliacao2 + nota_avaliacao3;

    if (nota_final < 60) {
      if ((nota_avaliacao1 < nota_avaliacao2) && (nota_avaliacao1 < nota_avaliacao3)) {
        nota_final = nota_trab + nota_reavaliacao + nota_avaliacao2 + nota_avaliacao3;
      }
      else if ((nota_avaliacao2 < nota_avaliacao1) && (nota_avaliacao2 < nota_avaliacao3)) {
        nota_final = nota_trab + nota_reavaliacao + nota_avaliacao1 + nota_avaliacao3;
      }
      else if ((nota_avaliacao3 < nota_avaliacao1) && (nota_avaliacao3 < nota_avaliacao2)) {
        nota_final = nota_trab + nota_reavaliacao + nota_avaliacao1 + nota_avaliacao2;
      }
    }

    //output de dados
    if ((frequencia >= 0.75) && (nota_final >= 60)) {
      printf("Parabéns, você foi aprovado!");
    }
    else {
      printf("Infelizmente você foi reprovado.");
    }

    return 0;
}
