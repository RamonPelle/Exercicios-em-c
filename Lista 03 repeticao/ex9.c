#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 9. Escreva um programa que lê um número, calcula e exibe quantos divisores ele possui. */
int main(){
    int i, n;
    printf("Qual o número? \n");
    scanf("%d", &n);
    printf("Os divisores de %d são: \n", n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
