#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 3
/* Faça um programa que o usuário preencha duas matrizes 3x3 de números inteiros que variam de -100 
até 100 (garanta isso ou solicite que o usuário digite novamente).
 Logo em seguida, calcule a soma das duas matrizes e mostre o resultado.
*/
int main() {
	int matriz1[linhas][colunas], matriz2[linhas][colunas], i, j;
	for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d da matriz 1? ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
			if(matriz1[i][j]<-100 || matriz1[i][j]>100){
				printf("Tente novamente com um número entre a faixa de [-100,100].");
				j--;
			}
        }
    }
	for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d da matriz 2? ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
			if(matriz2[i][j]<-100 || matriz2[i][j]>100){
				printf("Tente novamente com um número entre a faixa de [-100,100].");
				j--;
			}
        }
    }
	printf("\nMatriz 1:");
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz1[i][j]);
		}
	}
	printf("\nMatriz 2:");
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz2[i][j]);
		}
	}
	printf("\nSomadas:");
	for(i=0; i<linhas; i++){
		printf("\n");
        for(j=0; j<colunas; j++){
			matriz1[i][j] += matriz2[i][j];
			printf("%d ", matriz1[i][j]);
        }
    }
	
	return 0;
}
