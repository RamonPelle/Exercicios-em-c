#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 3. Um professor de pré-escola possui certo número de balas que deseja distribuir igualmente
entre seus alunos. Ele ficará com as balas que sobrarem, se houver. Faça um programa que
leia o número de alunos e o número de balas, determine quantas balas cada aluno receberá e
quantas balas ficarão com o professor. */
int main(){
    int alunos = 20;
    int balas = 41;
    int bpa = 2;
    int professor = balas - (bpa*alunos);
    printf("Os alunos receberão %d",bpa);
    printf(" balas e o professor %d",professor);
    printf(" bala");
    return 0;
}
