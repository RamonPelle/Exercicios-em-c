#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 6. Escreva um programa que leia números até o usuário digitar -1 (Obs: o valor –1 é somente
um terminador e não deve ser considerado nos cálculos.), calcule e mostre:
a) a soma dos números digitados;
b) a quantidade de números
digitado;
c) a média dos números digitados;
d) o maior número digitado;
e) o menor número digitado;
f) a média dos números pares. */
int main(){
    int n, soma=0, qtd=0, maior=0, menor=255, nPares=0;
    float media=0, mediaPares=0;
    while (1<2)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        soma+=n;
        qtd++;
        if(maior<n){
            maior = n;
        }
        if(menor>n && n!=-1){
            menor = n;
        }
        if(n%2==0){
            mediaPares+= n;
            nPares++;
        }         
    if(n==-1){
        break;
    }
    }
    media = soma/qtd;
    mediaPares = mediaPares /  nPares;
    printf("-------------------------\nSoma: %d \nQuantidade de números digitados: %d \nMédia de números digitados: %.2f \nMaior número digitado: %d \nMenor número digitado: %d \nMédia de números pares: %.2f \n-------------------------", soma, qtd, media, maior, menor, mediaPares);
   
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
