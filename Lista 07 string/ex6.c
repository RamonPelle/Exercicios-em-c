#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>;
#define size 50
/* Escreva um programa que conte a quantidade de palavras de um texto digitado pelo teclado.
(Uma palavra é qualquer sequência de caracteres separada por um ou mais espaços). */
// for pra armazenar cada palavra separada por espaco e contar quantas letras por var auxiliar.
int main()
{
	SetConsoleOutputCP(65001);
	int n, i;
	char string[size], buffer[size];

	// Escrever o string
	printf("Vamos calcular todas palavras que você escreverá:\n");
	gets(string);

	// calcular o numero de palavras
	for (i = 0; i <= strlen(string); i++)
	{
		if (string[i] == ' ' && string[i+1] != ' ')
		{
			n++;
		}
	}
	
	if(string[0] != ' '){
			n++;
	}

	// dizer o número de palavras
	printf("Foram digitadas %d palavras\n", n);
	return 0;
}
