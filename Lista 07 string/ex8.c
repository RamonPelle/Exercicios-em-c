#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 71
/* Faça uma função que receba uma string e diga se ela é palíndrome. Uma string é palíndrome
quando pode ser lida tanto de trás pra frente quanto de frente para trás e possui exatamente a
mesma seqüência de caracteres. Ex.: ASA, SUBI NO ONIBUS. Desconsidere os espaços.*/

int main() {
	int i ,n;
	char texto[size], buffer[size], textoaux[size];

	printf("Digite o texto:\n");
	gets(texto);

	for(i=0;i<strlen(texto); i++){
		if(texto[i]!=" "){
			textoaux[i]=texto[i];
		}
	}
//inverter a string
	n = sprintf(buffer, textoaux); // n recebe o tamanho da string q o usuario digitou.
	char fim[n];
	for(i=0; i<n; i++){
		fim[n-i] = textoaux[i];
	}
	for(i=1; i<=n; i++){
		printf("%c", fim[i]);
	}
	
	if(strcmp(fim,textoaux)==0){
		printf("É palíndrome");
	}else{
		printf("Não é palíndrome");
	}
	return 0;
}
