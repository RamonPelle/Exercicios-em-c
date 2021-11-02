#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* Escreva um programa que leia um texto pelo teclado. Em seguida, faça uma função que
inverta e exiba-o na tela. Exemplo: Para a string "Bom dia" o programa imprime "aid moB"
Obs: O objetivo é alterar os caracteres na string, não é imprimir ao contrário!
 */

int main() {
	#define size 71
	int i ,n;
	char texto[size], textoaux[size], buffer[size];

	printf("Digite o texto:\n");
	gets(texto);

	n = sprintf(buffer, texto); // n recebe o tamanho da string q o usuario digitou.

	for(i=0; i<n; i++){
		textoaux[n-i] = texto[i];
	}
	for(i=1; i<=n; i++){
		printf("%c", textoaux[i]);
	}

	
	return 0;
}
