#include <stdio.h>
#include <stdlib.h>

/* 7. Um número perfeito é um inteiro positivo tal que a soma dos seus divisores próprios é igual ao número. Por
exemplo, 28 = 1 + 2 + 4 + 7 + 14 é um número perfeito. Se a soma dos divisores é menor que o número ele é deficiente.
Se a soma é maior que o número ele é abundante. Faça um programa que leia um número inteiro positivo n e imprima
uma mensagem indicando se o número é perfeito, deficiente ou abundante.
 */

int main(){
	int n, soma=0, i=1;

	printf("Qual número você quer verificar se é perfeito?\n");
	scanf("%d", &n);

	for(i=1; i<n; i++){
		if(n%i==0){
			soma+= i;
		}
	}

	//printf("%d", soma);

	if (n<soma){
		printf("O número é abundante.");
	}else if(n>soma){
		printf("O número é deficiente.");
	}else{
		printf("O número é perfeito.");
	}
	return 0;
}
