#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 8. Faça um programa que leia as 3 notas de um aluno, calcule e exiba a média final deste
aluno. Considerar que a média é ponderada e que os pesos para as notas são: 2, 3 e 5,
respectivamente. */
int main(){
    float v1;
    float v2;
    float v3;
    printf("Valor da primeira nota: ");
    scanf("%f", &v1);
    v1 *= 2;
    printf("Valor da segunda nota: ");
    scanf("%f", &v2);
    v2 *= 3;
    printf("Valor da terceira nota: ");
    scanf("%f", &v3);
    v3 *= 5;
    printf("A média deles é: %.2f", (v1+v2+v3)/10);
    return 0;
}
