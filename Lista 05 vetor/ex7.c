#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Escreva um programa que crie um vetor de inteiros de 50 posições e gere aleatoriamente
valores para as 50 posições. Mostre os valores em ordem crescente e decrescente.
 */

int main() {
	int vetor[50] = {}, i;
	srand(time(NULL));
	for(i=0; i<50; i++){
		vetor[i] = rand()%10000;
	}
	printf("\nVetor: ");
	for(i=0; i<50; i++){
		printf("%d ", vetor[i]);
	}

	return 0;
}
