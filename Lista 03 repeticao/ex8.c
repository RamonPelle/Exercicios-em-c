#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 8. Escreva um programa que lê um inteiro n, calcule e imprima o valor da seguinte soma:
S= 1 + 1/2 + 1/3 + 1/4... + 1/n*/
int main(){
    int n, i;
    float s=0;
    printf("Qual o valor de N? \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        s += (1.0/i);
    }
    printf("%.2f", s);
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
