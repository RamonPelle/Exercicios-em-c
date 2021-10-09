#include <stdio.h>
#include <stdlib.h>

/* . Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. Por fim, exiba os
três vetoresp */

int main() {
	int vetor1[10] = {},vetor2[10] = {},i, vetor3[10] = {};
		
	for(i=0; i<10; i++){
		printf("Digite o valor %d do vetor 1: \n", i+1);
		scanf("%d", &vetor1[i]);
		printf("Digite o valor %d do vetor 2: \n", i+1);
		scanf("%d", &vetor2[i]);
	}
	printf("Vetor 1: ");
	for(i=0; i<10; i++){
		vetor3[i] = vetor1[i] * vetor2[i];
		printf("%d ", vetor1[i]);
	}
	printf("\nVetor 2: ");
	for(i=0; i<10; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\nVetor 3: ");
	for(i=0; i<10; i++){
		printf("%d ", vetor3[i]);
	}

	return 0;
}
