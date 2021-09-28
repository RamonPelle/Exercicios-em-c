#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 12. Elabore um programa que leia dois valores inteiros e escreva estes valores com uma das
seguintes mensagens: “X é múltiplo de Y” ou “X não é múltiplo de Y”.
Exemplo:
entradas: 5 e 10 ==> 10 é multiplo de 5
entradas: 10 e 5 ==> 10 é multiplo de 5
entradas: 5 e 11 ==> 11 não é multiplo de 5
entradas: 11 e 5 ==> 11 não é multiplo de 5 */
int main(){
	
    int v1;
    int v2;

    printf("Digite dois valores: \n");
    printf("Valor 1: ");
    scanf("%d", &v1);
    printf("Valor 2: ");
    scanf("%d", &v2);

    if(v1%v2==0){
        printf("%d é multiplo de %d \n", v1,v2);
    }else {
        printf("%d não é multiplo de %d \n", v1,v2);
    } 

    if(v2%v1==0){
        printf("%d é multiplo de %d", v2,v1);
    }else {
        printf("%d não é multiplo de %d", v2,v1);
    }
    
    return 0;
}
