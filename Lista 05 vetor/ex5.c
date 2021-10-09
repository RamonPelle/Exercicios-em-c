#include <stdio.h>
#include <stdlib.h>

/* 5. Faça um programa que leia um vetor A de 20 elementos. Em seguida, compacte o vetor, 
retirando os valores nulos e negativos. Coloque o resultado no vetor B (que possui o mesmo
tamanho do vetor A e as posições não utilizadas devem ficar com 0). Imprima o vetor B. */

int main() {
	int vetorA[6] = {}, vetorB[6] = {}, i;
	for(i=0; i<6; i++){
		printf("Digite o valor %d do vetor: \n", i+1);
		scanf("%d", &vetorA[i]);
	}
	for(i=0; i<6; i++){
		if(vetorA[i]<=0){
			vetorB[i] = 0;
		}else{
			vetorB[i] = vetorA[i];
		}
	}
	printf("\nVetor A: ");
	for(i=0; i<6; i++){
		printf("%d ", vetorA[i]);
	}

	printf("\nVetor B: ");
	for(i=0; i<6; i++){
		printf("%d ", vetorB[i]);
	}
	return 0;
}
