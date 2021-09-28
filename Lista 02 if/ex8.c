#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 8. Em uma disciplina são realizadas quatro provas. As duas primeiras notas têm peso 1 e as duas últimas
peso 2. O aluno que obtém média 7,0 ou superior é aprovado. Se a média for inferior a 7,0 e superior ou igual a
3,0 o aluno está de exame final. Se a média for inferior a 3,0 o aluno está reprovado. Além das notas é
considerada também a frequência do aluno que deve ser maior ou igual a 75% para que ele não reprove por
falta. Faça um programa que leia a frequência do aluno (número inteiro referente a quantidade de dias presente
em aula), o número total de aulas e as quatro notas, calcule a média e imprima uma mensagem que indique a
situação do aluno: "aprovado", "exame final", "reprovado por nota" ou "reprovado por falta". */
int main(){
    float p1,p2,p3,p4,media, aprFrq;
    int totAulas, frequencia;
    printf("Qual o número de aulas da matéria?\n");
    scanf("%d", &totAulas);
    printf("Qual a frequência? (em quantas aulas esteve presente) \n");
    scanf("%d", &frequencia);
    printf("Qual nota foi tirada na prova 1?\n");
    scanf("%f", &p1);
    printf("Qual nota foi tirada na prova 2?\n");
    scanf("%f", &p2);
    printf("Qual nota foi tirada na prova 3?\n");
    scanf("%f", &p3);
    printf("Qual nota foi tirada na prova 4?\n");
    scanf("%f", &p4);

    media = (p1+p2 + ((p3+p4)*2)) / 6;
    aprFrq = totAulas * 0.75;

    if(frequencia < aprFrq){
        printf("Reprovado por falta. \n");
    }else{
        if(media<3){
            printf("Aluno reprovado por nota ");
        }else if(media>=3 && media<7){
            printf("Aluno em exame");
        }else{
            printf("Aluno aprovado por nota! ");
        }
    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
