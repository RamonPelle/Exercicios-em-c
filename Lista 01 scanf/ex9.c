#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 9. Faça um programa que leia o salário bruto de um funcionário e exiba o seu salário liquido
descontando 15% do salário bruto. */
int main(){
    float sal = 0;
    printf("Valor do salário: ");
    scanf("%f", &sal);
    printf("O salário líquido é de: %.2f", sal - (sal *0.15));
    return 0;
}
