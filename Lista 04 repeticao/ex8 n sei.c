#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um número inteiro pelo teclado e mostre na tela quantas vezes cada um de seus
dígitos aparece no número. OBS: Considere que o número avaliado deve ser menor (ou igual) a 10mil.
		Por exemplo: para o número 2151, exibir:
		1: 2 vezes
		2: 1 vez
		5: 1 vez*/
int main(){
	int n;
	printf("Digite um número: \n");
	scanf("%d", &n);
	if(n<=10000){
		
	}else{
	printf("Tente novamente com um número menor ou igual a 10000.\n");
	}
	return 0;
}
