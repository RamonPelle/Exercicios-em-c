#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 5. Escrever um programa que lê 4 valores: P, A, B e C. Se P=1 então calcular a média aritmética de A, B e C
e escrever esta média; se P=2 somar os 3 valores atribuindo este valor a uma variável qualquer e escrevendo
esta soma; se P=3, verificar se B é par ou ímpar e escrever uma mensagem apropriada. Se P possuir qualquer
outro valor mostrar a mensagem "operação inválida". */
int main(){
    int p, a, b, c, soma;
    float media;
    printf("Digite o valor para P: ");
    scanf("%d",&p);
    printf("Digite o valor para A: ");
    scanf("%d",&a);
    printf("Digite o valor para B: ");
    scanf("%d",&b);
    printf("Digite o valor para C: ");
    scanf("%d",&c);
    switch(p){
        case 1:
            media = (a+b+c)/3;
            printf("A média dos valores é:%2.f", media);
            break;
        case 2:
            soma = a+b+c;
            printf("A soma dos valores é:%d",soma);
            break;
        case 3:
            if(b%2==0){
                printf("B é um valor par!");
            }else{
                printf("B é um valor impar!");
            }
            break;
        default:
            printf("Operação inválida.");
    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
