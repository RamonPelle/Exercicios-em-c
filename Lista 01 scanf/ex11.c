#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 11. Elabore um programa que leia dois valores inteiros e exiba a diferença do maior pelo menor. */

int main(){
    int v1;
    int v2;
    printf("Digite dois valores: \n");
    printf("Valor 1: ");
    scanf("%d", &v1);
    printf("Valor 2: ");
    scanf("%d", &v2);
    if(v1>v2){
        printf("A diferença entre o menor e o maior é: %d", v1-v2);
    }else{
        printf("A diferença entre o meior e o maior é: %d", v2-v1);
    }
    return 0;
}
