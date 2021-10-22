#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
/* Faça um programa que leia uma matriz 5x5 de números reais.
 A seguir, multiplique cada linha pelo elemento da diagonal principal daquela linha. Mostre a matriz após as multiplicações.*/

int main() {
	int matriz[linhas][colunas], i, j, diagonal[5] = {};
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(i==j){
				diagonal[i] = matriz[i][j];
			}
		}
	}
	printf("\nMatriz antes da multiplicação:");
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}

	for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
			if(i!=j){
				matriz[i][j] *= diagonal[i];
			}
        }
    }
	printf("\nMatriz depois da multiplicação:");
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	return 0;
}
