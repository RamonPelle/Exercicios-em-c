#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 7. Faça um programa que leia a altura e diâmetro de uma lata de óleo, calcule e exiba o volume
e a área lateral da lata. */
int main(){
    int h;
    int d;
    float v;
    float r;
    float al;
    printf("Digite o valor da altura da lata: ");
    scanf("%d",&h);
    printf("Digite o valor do diametro da lata: ");
    scanf("%d",&d);
    r = d/2;
    al = 2 * 3.14 * r * h;
    v = 3.14*pow(r,2)*h;
    printf("A área lateral é %.2f", al);
    printf(" e o volume %.2f",v);



    return 0;
}
