#include <stdio.h>
#include <stdlib.h>
// Questão 1 (2,5 pontos)
// Faça um programa que solicite um número para o usuário e indique se o número é perfeito,
// deficiente ou abundante. Lembrando que:
// 7. Um número perfeito é um inteiro positivo tal que a soma dos seus divisores
// próprios é igual ao número.
// 8. Se a soma dos divisores é menor que o número ele é deficiente.
// 9. Se a soma é maior que o número ele é abundante.
// Por exemplo, 28 = 1 + 2 + 4 + 7 + 14 é um número perfeito.
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

