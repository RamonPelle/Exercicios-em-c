#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 8
/* Questão 2 (2.5 pontos) – Uso obrigatório de função:
Faça um programa que crie uma matriz A 50x50 de números inteiros. Crie e utilize uma
função que receba a matriz A e retorne para o programa principal o menor valor dos
elementos acima da diagonal secundária (não avalie os elementos da diagonal
secundária). O programa principal deverá imprimir o retorno da função. */
int menorNumero(int a[][size]);

int main (){
	int i, j, matriz[size][size], menor;
	srand (time(NULL));
	for(i=0; i<size; i++){
		for (j=0; j<size; j++){
		matriz[i][j] = rand()%200;
		printf ("%d ", matriz[i][j]);	
		}
		printf ("\n");
	}
	
	menor = menorNumero (matriz);
	printf ("O menor número é: %d\n", menor);
	return 0;
}

int menorNumero (int a[][size]){
	int i, j, aux=0;
	for (i=0; i < size; i++){
		if (i==1){
			aux = a[i][j];
		}
		for (j=0; j < size; j++){
			if (i + j < size + 1){
				if (aux > a[i][j]){
					aux = a[i][j];
					printf ("\nAux = %d\n", aux);
				}
			}
		}
	}
	return aux;
}