#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 51
/* Uma operação muito comum de manipulação de strings é conhecida como TRIM. Trata-se
de uma função que recebe uma string e remove todos os espaços no início e no fim da string.
Elabore uma função que realiza esta tarefa.
 */

int main() {
	int i, inicio=0, fim;
	char string[size], string2[size];
	
	printf("Informe o texto da string: \n");
	gets (string);
	
	while (string[inicio] == ' '){
		inicio++; 
	}
	
	fim = strlen(string);
	while (string[fim] == ' '){
		fim--;
	}
	
	for (i=inicio; i<=fim; i++){
		string2[i - inicio] = string[i];
	}
		
	printf ("%s\n", string2);
	
	return 0;
}
