#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 2. Escrever um programa que leia três valores inteiros e apresente o menor dos valores lidos */
int main(){
    int v1,v2,v3;
    int menor = 0;
    printf("Escreva três valores:\nValor 01: ");
    scanf("%d", &v1);
    printf("Valor 02: ");
    scanf("%d", &v2);
    printf("Valor 03: ");
    scanf("%d", &v3);
    menor = v1;

    if((v2<menor)&&(v2<v3)){
        menor=v2;
    }else{
        if(v3<menor){
            menor = v3;
        }
    }
    printf("O menor número é: %d", menor);
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
