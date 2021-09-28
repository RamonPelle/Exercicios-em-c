#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 7. Escreva um programa que leia uma sequencia de números inteiros terminada por 0. Ao
final, o programa deve exibir: a quantidade de números digitada; o percentual de números
positivos digitados e o percentual de números negativos digitados. */
int main(){
    int n, qtd=0;
    float porcPosi=0, porcNeg=0;
    
    while(1<2){
        printf("Digite um número terminado em 0, digite -1 para terminar. \n");
        scanf("%d", &n);
        if(n==-1){
            break;
        }
        if(n%10!=0 && n!=-1){
            printf("Digite um número terminado em 0. Tente novamente");
            break;
        }else{
            qtd++;
            if(n>0){
            porcPosi++;
            }else{
            porcNeg++;
            }
        }
    }
	setlocale(LC_ALL, "Portuguese");
    porcNeg = porcNeg/100;
    porcPosi = porcPosi/100;

    printf("------------------\nQuantidade de números digitada: %d\nPercentual de números positivos: %.2f\nPercentual de números negativos: %.2f\n------------------", qtd, porcPosi, porcNeg);
    return 0;
}
