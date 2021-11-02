#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 50
/*Crie um programa para eliminar os espaços a mais entre as palavras dentro de um texto.
Exemplo: Entrada: "o    dia   está    nublado" Saída:"o dia está nublado"
 */

int main() {	
	int i, j=0;
	char string[size], string2[size];
	
	//leitura da string
	printf ("Informe a frase: \n");
	gets (string);
	
	//remover espaço
	for (i=0; i<=strlen(string); i++){
		if (string[i] == ' ' && string[i + 1] != ' '){
			string2[j] = string[i];
			j++;
		} else if (string [i] != ' '){
			string2[j] = string[i];
			j++;
		}
	} 
	
	printf ("%s\n", string2);
	return 0;
}
