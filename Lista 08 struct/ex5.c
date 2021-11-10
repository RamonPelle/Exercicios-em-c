#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 2
/*5) Escreva um programa que receba dois structs do tipo dma, cada um representando uma data
válida, e calcule o número de dias que decorreram entre as duas datas. OBS: Garanta que a estrutura
só armazenará datas válidas.
*/
int main()
{
	int i, bissexto = 0;
	typedef struct
	{
		int dia;
		int mes;
		int ano;
		int totalDias;
	} dma;

	dma data[size];

	printf("Digite as datas.\n");
	for (i = 0; i < size; i++)
	{
		printf("Entre com o ano: ");
		scanf("%d", &data[i].ano);
		printf("Entre com o mes: ");
		scanf("%d", &data[i].mes);
		printf("Entre com os dias: ");
		scanf("%d", &data[i].dia);
		if (data[i].ano % 400 == 0 || (data[i].ano % 4 == 0 && data[i].ano % 100 != 0))
		{
			bissexto++;
		}
		if (data[i].mes > 12 || data[i].dia > 31)
		{
			printf("Tente novamente, desta vez com valores válidos.\n");
			i--;
		}
		switch (data[i].mes)
		{

		case 1:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			break;
		case 2:
			if (data[i].dia > 28 + bissexto)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 31;
			break;
		case 3:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 59;
			break;
		case 4:
			if (data[i].dia > 30)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 90;
			break;
		case 5:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 120;
			break;
		case 6:
			if (data[i].dia > 30)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 151;
			break;
		case 7:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 181;
			break;
		case 8:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 212;
			break;
		case 9:
			if (data[i].dia > 30)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 243;
			break;
		case 10:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 273;
			break;
		case 11:
			if (data[i].dia > 30)
			{
				printf("Tente novamente com algum dia válido.");
				break;
			}
			data[i].dia += 304;
			break;
		case 12:
			if (data[i].dia > 31)
			{
				printf("Tente novamente com algum data[i].dia válido.");
				break;
			}
			data[i].dia += 334; // aqui tinha colocado 335 pra entrega
			break;
		default:
			printf("Entre com um valor para 'dia' válido. [1 = Janeiro... 12 = Dezembro.]\n");
			break;
		}
		if (bissexto)
		{
			data[i].dia++;
			if (data[i].mes == 2 && data[i].dia < 29)
			{
				data[i].dia--;
			}
		}
		while(data[i].ano>0){
			if(bissexto==0){
				data[i].totalDias += data[i].ano * 365;
				data[i].ano--;
			}else{
				data[i].totalDias += data[i].ano * 366;
				data[i].ano--;
			}
		}
		bissexto=0;
	}
	printf("Dias 1: %d\n", data[0].totalDias);
	printf("Dias 2: %d\n", data[1].totalDias);
	
	return 0;
}
