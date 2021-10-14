#include <stdio.h>
#include <stdlib.h>

/* 3. Faça um programa que leia um vetor de 10 posições de números inteiros e divida todos os
seus elementos pelo maior valor do vetor. Mostre o vetor antes e depois dos cálculos.
 */

int main() {
	int vetor[10] = {}, i, maior=0;
		
	for(i=0; i<10; i++){
		printf("Digite o valor %d do vetor: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=9; i>=0; i--){
		if(maior<vetor[i]){
			maior = vetor[i];
		}
	}
	for(i=0; i<10; i++){
		vetor[i]/= maior;
	}
	printf("\nVetor: ");
	for(i=0; i<10; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
