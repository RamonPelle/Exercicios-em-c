#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 10. Elabore um programa que leia dois valores inteiros e exiba o maior utilizando a seguinte
mensagem: “O maior valor lido é:”. */
int main(){
    int v1;
    int v2;
    printf("Digite dois valores: \n");
    printf("Valor 1: ");
    scanf("%d", &v1);
    printf("Valor 2: ");
    scanf("%d", &v2);
    if(v1>v2){
        printf("O maior valor lido é: %d", v1);
    }else{
        printf("O maior valor lido é: %d", v2);
    }
    return 0;
}
