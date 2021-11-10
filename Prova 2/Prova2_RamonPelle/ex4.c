#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define linhas 50
#define colunas 50
/*Questão 4 (2,5 pontos)-Não precisa utilizar função:
Faça um programa que preencha aleatoriamente uma matriz 50x50 de números inteiros,
apenas com números de -10 até 10 (permita todos esses valores, inclusive o -10 e 10).
Na mesma matriz, transforme-a na sua respectiva matriz transposta e, por fim, imprima a
matriz. OBS: Não pode criar uma outra matriz auxiliar do mesmo tamanho.
Por exemplo (para ilustrar apresento uma matriz com dimensões menores):
Digitada pelo usuário:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Matriz resultante:
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16*/

int main(){
	srand(time(NULL));
	int i, j,aux=0, matriz[linhas][colunas];
	
	//declarar a matriz
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
				matriz[i][j] = (rand()%21) + (-10);// faixa rand de -10 -> 10.
		}
	}

	printf("Matriz normal:\n");
	//retornar a matriz
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}


	printf("\nMatriz Transposta:\n");
	//transformar em transposta
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(i>j){
				aux = matriz[i][j];
				matriz[i][j] = matriz[j][i];
				matriz[j][i] = aux;
			}		
		}
	}
	//retornar a matriz transposta
	for(i=0; i<linhas; i++){
		printf("\n");
		for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	return 0;
}
