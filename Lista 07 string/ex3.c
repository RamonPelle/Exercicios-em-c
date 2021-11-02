#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* Dado um texto inserido pelo teclado, faça uma função que receba esse texto e exiba quantas
vezes cada vogal aparece na string. */

int main() {
	#define size 71
	int i,j,n, repeticaoVogais[5] = {0,0,0,0,0};
	char texto[size], buffer[size], vogais[6] = {'a', 'e', 'i','o', 'u', '\0'};

	printf("Digite o texto:\n");
	gets(texto);
	n = sprintf(buffer, texto); // n recebe o tamanho da string q o usuario digitou.

	for(i=0; i<=n; i++){
		for(j=0; j<strlen(vogais); j++){
				if(texto[i] == vogais[j]){
				repeticaoVogais[j] += 1;
			}
		}
	}
	for(i=0; i<5; i++){
		printf("A vogal %c repetiu %d vezes.\n",vogais[i], repeticaoVogais[i]);
	}	
	return 0;
}
