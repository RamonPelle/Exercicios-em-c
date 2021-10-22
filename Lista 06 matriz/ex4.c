#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
// Faça um programa que preencha uma matriz 5x5, com números aleatórios de 10 até 100.
//Imprima toda a matriz, imprima o menor e o maior valor existente.

int main() {
	srand(time(NULL));
	int matriz[linhas][colunas], i, j, maior=0, menor=101;

	for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
			matriz[i][j]= 10 + (rand()%90);
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
			}else if(matriz[i][j]>maior){
				maior=matriz[i][j];
			}
        }
    }

	for(i=0; i<linhas; i++){
		printf("\n");
        for(j=0; j<colunas; j++){
			printf("%d   ",matriz[i][j]);
        }
    }

	printf("\nO menor valor é: %d.\nO maior valor é: %d.",menor, maior);
	return 0;

}
