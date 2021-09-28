#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 5. Faça um programa que leia os coeficientes (a, b, c) de uma equação do segundo grau,
calcule e exiba o valor de seu discriminante, = b2
-4ac. */
int main(){
    int a;
    int b;
    int c;
    int disc = 0;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    printf("Digite o valor de c: ");
    scanf("%d",&c);
    disc = pow(b,2) - (4*a*c); 
    printf("O valor do seu discriminante é: %d", disc);
    return 0;
}
