#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 6. Faça um programa que leia um valor, escreva este valor ao quadrado, ao cubo e à quarta
potência. */
int main(){
    int x;
    int rf;
    printf("Digite algum valor: ");
    scanf("%d",&x);
    rf = pow(x, 2);
    printf("Este valor ao quadrado: %d\n", rf );
    rf = pow(x, 3);
    printf("Este valor ao cubo: %d\n", rf);
    rf = pow(x, 4);
    printf("Este valor à quarta potência: %d\n", rf);
    
    return 0;
}
