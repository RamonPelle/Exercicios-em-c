#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 7. Uma cidade classifica um índice de poluição menor que 35 como agradável; de 35 até 60 desagradável e
acima de 60 perigoso. Escreva um programa que leia um número real representando o índice de poluição e
imprime a classificação adequada para ele. */
int main(){
	setlocale(LC_ALL, "Portuguese");
    float indice;
    printf("Qual o índice de poluição?\n");
    scanf("%f", &indice);
    
    if(indice<35){
        printf("A classificação é agradável");
    }else if(indice>=35 && indice<=60){
         printf("A classificação é desagradável");
    }else{
         printf("A classificação é perigoso");
    }
    return 0;
}
