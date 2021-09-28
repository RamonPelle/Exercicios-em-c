#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <locale.h>
/* 2. Faça um programa que leia dois valores inteiros e imprima a média aritmética calculada. */
int main(){
    float v1, v2;
    printf("Valor da primeira nota: ");
    scanf("%f", &v1);
    printf("Valor da segunda nota: ");
    scanf("%f", &v2);
    printf("A média deles é: %.2f", (v1+v2)/2);
    return 0;
}
