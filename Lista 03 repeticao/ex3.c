#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 3. Escreva um programa que leia um inteiro N e uma sequência de N números inteiros, e
imprime a soma dos números pares da sequência lida. */
int main(){
    setlocale(LC_ALL, "Portuguese");
    int repeticao, i, soma=0, valor;
    printf("Quantos números tem a sequência? \n");
    scanf("%d", &repeticao);
    for(i=0; i<repeticao; i++){
        printf("Digite um número: \n");
        scanf("%d", &valor);
        if(valor>0 && valor%2==0){
            soma+= valor;
        }
    }

    printf("A soma dos números pares é: %d", soma);
	
    return 0;
}
