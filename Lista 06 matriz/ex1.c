#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 6
// 1. Escreva um programa que inicialize uma matriz 5x6 com valores inteiros aleatórios e exibaa na tela.

int main() {
	int matriz[linhas][colunas], i, j;

	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	return 0;
}
