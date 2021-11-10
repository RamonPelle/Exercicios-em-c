// continua com erro
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 2
// 2) Faça um programa que possua uma estrutura para armazenar 2 horários (hora, minuto,
// segundo). Esse programa deve ler esses dois horários e informar a diferença entre eles
// (informar a diferença no formato hh:mm:ss).
int main()
{
	int i, sobra, difHoras, difMinutos, difSegundos, aux = 0;
	typedef struct
	{
		int hora, minuto, segundo;
	} relogio;

	relogio horarios[size];

	for (i = 0; i < size; i++)
	{
		printf("Entre com a hora: ");
		scanf("%d", &horarios[i].hora);
		printf("Entre com os minutos: ");
		scanf("%d", &horarios[i].minuto);
		printf("Entre com os segundos: ");
		scanf("%d", &horarios[i].segundo);

		if (horarios[i].hora > 24 || horarios[i].minuto > 60 || horarios[i].segundo > 60)
		{
			printf("Tente novamente, desta vez com valores válidos, [MAXIMO: 24h, 60m e 60s]\n");
			i--;
		}
	}

	if (horarios[0].hora < horarios[1].hora)
	{
		printf("Digite a hora mais alta na primeira execução. Tente novemente.");
	}
	else
	{
		difHoras = horarios[0].hora - horarios[1].hora;
		difMinutos = horarios[0].minuto - horarios[1].minuto;
		difSegundos = horarios[0].segundo - horarios[1].segundo;

		if (difSegundos < 0)
		{
			sobra = -difSegundos;
			difSegundos = 0;
			difMinutos--;
			difSegundos = 60 - sobra;
		}
		sobra = 0;
		if (difMinutos < 0)
		{
			sobra = -difMinutos;
			difMinutos = 0;
			difHoras--;
			difMinutos = 60 - sobra;
		}

		printf("A diferença entre os horários é: %d:%d:%d", difHoras, difMinutos, difSegundos);
	}
	return 0;
}
