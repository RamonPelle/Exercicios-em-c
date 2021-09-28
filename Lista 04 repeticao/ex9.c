#include <stdio.h>
#include <stdlib.h>

/*10. Escreva um programa que gere, para um valor N > 0 fornecido pelo usuário, um "quadrado" de N linhas e N
colunas que tenha caracteres '*' nas posições da diagonal principal e os caracteres '.' nas demais posições. Por exemplo,
para N=5 o programa deve gerar:
		*....
		.*...
		..*..
		...*.
		....*       */

int main() {
	int i, j, n; //j = linha, i = coluna
	printf("Digite um número maior que 0:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==j){
				printf("*");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
