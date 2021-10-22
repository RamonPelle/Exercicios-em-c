#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 3
/*  Faça um programa que o usuário irá preencher uma matriz 3x3, logo em seguida, informe a
quantidade de números pares existentes e imprima-os.
*/

int main() {
	int matriz[linhas][colunas], i, j, pares=0;

	for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]%2==0){
				pares++;
			}
        }
    }

	for(i=0; i<linhas; i++){
		printf("\n");
        for(j=0; j<colunas; j++){
			printf("%d ", matriz[i][j]);
        }
    }

	printf("Pares: %d.", pares);
	return 0;
}
