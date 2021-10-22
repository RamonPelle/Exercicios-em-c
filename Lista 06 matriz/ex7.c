#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
/* Escreva um programa que leia uma matriz M 5x5 e crie 2 vetores SL (5 posições) e SC (5
posições) que contenham, respectivamente, as somas das linhas e das colunas de M. Imprima a matriz e os vetores criados. */

int main() {
	int matriz[linhas][colunas], sl[5] = {}, sc[5] = {}, i, j;

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
			sl[i] +=matriz[i][j];
			sc[j] +=matriz[i][j];
		}

	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("%d linha: %d\n", i+1, sl[i]);
		printf("%d coluna: %d\n", i+1, sc[i]);
	}
	
	return 0;
}
