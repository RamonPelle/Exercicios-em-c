#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 50
/* Construa um programa que leia uma string s, e dois caracteres a e b. Em seguida, o
programa deve substituir todas as ocorrências do caractere a na string s pelo caractere b.
(Observação: a e b são informados pelo usuário e podem ser qualquer letra)*/

int main() {
	int i;
	char string[size], string2[size], car[2];

	printf("Digite o texto: \n");
	gets(string);

	printf("Agora os dois caracteres:\nCaracter 1: ");
	scanf("%s", &car[0]);

	printf("\nCaracter 2: ");
	scanf("%s", &car[1]);

	for(i=0; i<strlen(string); i++){
		if(string[i] == car[0]){
			string2[i] = car[1];
		}else if(string[i] == car[1]){
			string2[i] = car[0];
		}else{
			string2[i] = string[i];
		}
	}

	printf("%s", string2);
	return 0;
}
