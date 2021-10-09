#include <stdio.h>
#include <stdlib.h>

/* 4. Escreva um programa que leia um vetor de 20 posições e mostre-o na tela. Em seguida,
troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo,
 e assim sucessivamente até o elemento central do vetor. 
Por fim, mostre o vetor depois de efetuar todas as trocas. (Obs: Faça as trocas no mesmo vetor, sem utilizar vetor auxiliar) */

int main() {
	int vetor[6] = {}, i,j=6, aux;
	for(i=0; i<6; i++){
		printf("Digite o valor %d do vetor: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<3; i++){
		j--;
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j]=aux;
	}
	printf("\nVetor: ");
	for(i=0; i<6; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
