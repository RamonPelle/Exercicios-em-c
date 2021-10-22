#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
// 2. Escreva um programa que inicialize uma matriz identidade de ordem 5 e exiba-a na tela.

int main() {
	int matriz[linhas][colunas], i, j;

	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(i==j){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
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
