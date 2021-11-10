#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 71
/* Faça uma função que receba uma string e diga se ela é palíndrome. Uma string é palíndrome
quando pode ser lida tanto de trás pra frente quanto de frente para trás e possui exatamente a
mesma seqüência de caracteres. Ex.: ASA, SUBI NO ONIBUS. Desconsidere os espaços.*/

int main()
{
	int i, j = 0, n;
	char texto[size], buffer[size], textoaux[size], invertida[size];

	printf("Digite o texto:\n");
	gets(texto);

	for (i = 0; i < strlen(texto); i++)
	{
		if (texto[i] != ' ')
		{
			textoaux[j] = texto[i];
			j++;
		}
	}
	// inverter a string
	n = strlen(textoaux);

	for (i = 0; i < n; i++)
	{
		invertida[n - 1 - i] = textoaux[i];
	}
	invertida[n] = '\0';

//	printf("%s\n%d\n%d", invertida, strlen(textoaux), strlen(invertida));
	if (strcmp(invertida, textoaux) == 0)
	{
		printf("É palíndrome");
	}
	else
	{
		printf("Não é palíndrome");
	}
	return 0;
}
