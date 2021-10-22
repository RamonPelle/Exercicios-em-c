#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 5
// Escreva um programa que leia um número inteiro n e uma matriz V 5x5 de inteiros. Conte
// quantos valores iguais a n existem na matriz. Mostre os resultados
int main() {
	int matriz[linhas][colunas],i,j,n,r=0;
	printf("Qual o valor de n?\n");
	scanf("%d", &n);

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas;j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]==n){
				r++;
			}
        }
    }
	printf("O valor %d se repetiu na matriz %d vezes.",n,r);
	return 0;
}
