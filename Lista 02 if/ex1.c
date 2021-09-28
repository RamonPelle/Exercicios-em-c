#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 1. Escrever um programa que leia dois valores inteiros e apresente o maior dos valores lidos */
int main(){
    int v1, v2;
    printf("Digite dois valores inteiros.\n Valor 01:");
    scanf("%d",&v1);
    printf("Valor 02:");
    scanf("%d",&v2);

    if(v1>v2){
        printf("O valor %d é maior que %d", v1, v2);
    }else{
        printf("O valor %d é maior que %d", v2, v1);
    }
    
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
