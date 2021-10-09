#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que preencha um vetor de 10 elementos inteiros. 
Em seguida, encontre e mostre o menor elemento e sua posição no vetor.*/

int main() {
	int vetor[10] = {}, i, menor, posicao =0;
		
	for(i=0; i<10; i++){
		printf("Digite o valor %d do vetor: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	menor = vetor[0];
	for(i=9; i>0; i--){
		if(menor>vetor[i]){
			menor = vetor[i];
			posicao = i;
		}
	}
	printf("O menor elemento é %d na posição %d.", menor, posicao);
}
