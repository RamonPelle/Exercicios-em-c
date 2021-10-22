#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
/* Faça um programa que calcule a média dos elementos da diagonal principal de uma matriz
5 x 5 de inteiros. */

int main() {
	int matriz[linhas][colunas], i, j, media;
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(i==j){
				media+=matriz[i][j];
			}
		}
	}
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}

	printf("\nA média da diagonal é:%d", media/linhas);
	return 0;
}
