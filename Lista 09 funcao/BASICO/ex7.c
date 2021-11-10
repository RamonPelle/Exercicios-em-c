#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*7. Faça uma única função que leia 10 valores inteiros e que retorne o maior valor lido para o programa principal que
irá imprimi-lo.*/
int lista(int valores[]);
int main() {
	int i, valores[10],maior;
	for(i=0; i<9;i++){
		printf("Digite o valor na posicao %d: ",i);
		scanf("%d", &valores[i]);
	}
	maior = lista(valores);
	printf("O maior valor é: %d", maior);
	return 0;
}
int lista(int valores[]){
	int i, maior=0;
	for(i=0; i<9;i++){
		if(valores[i]>maior){
			maior = valores[i];
		}
	}
	return (maior);
}

