#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que solicite uma data ao usuário (solicite um dia, solicite um mês e solicite
um ano), logo em seguida, o programa deverá informar a quantidade de dias do início do ano
informado até a data informada (incluindo esse dia).
Exemplos:
- considerando 12/02/2021. O programa irá imprimir: “43 dias do inicio do ano até a data informada”
- considerando 05/03/2020. O programa irá imprimir: “65 dias do inicio do ano até a data informada”
Observação: todo ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for
divisível por 100. Por exemplo: 1988, 1992, 1996.*/

int main() {
	int dia, mes, ano;
/*1	Janeiro	tem 31 dias 0 
2	Fevereiro	tem 28 dias (29 dias nos anos bissextos) 31
3	Março	tem 31 dias 59
4	Abril	tem 30 dias 90
5	Maio	tem 31 dias 120
6	Junho	tem 30 dias 151
7	Julho	tem 31 dias 181
8	Agosto	tem 31 dias 212
9	Setembro	tem 30 dias 243
10	Outubro	tem 31 dias 273
11	Novembro	tem 30 dias 304
12	Dezembro	tem 31 dias 335*/ 
	printf("Digite uma data: \n");
	printf("Dia: ");
	scanf("%d", &dia);
	printf("\nMês [1-12]: ");
	scanf("%d", &mes);
	printf("\nAno: ");
	scanf("%d", &ano);
	if(ano%400==0 || (ano%4==0 && ano%100!=0)){
		if(mes==2 &&dia<29){
			dia--;
		}
		printf("teste");
		dia++;
	}
	switch (mes){ //horrivel isso, mas unica forma q encontrei
	case 1:
		printf("Passou %d dias do ano.", dia);
		break;
	case 2:
		dia += 31;
		printf("Passou %d dias do ano.", dia);
		break;
	case 3:
		dia += 59;
		printf("Passou %d dias do ano.", dia);
		break;
	case 4:
		dia += 90;
		printf("Passou %d dias do ano.", dia);
		break;
	case 5:
		dia += 120;
		printf("Passou %d dias do ano.", dia);
		break;
	case 6:
		dia += 151;
		printf("Passou %d dias do ano.", dia);
		break;
	case 7:
		dia += 181;
		printf("Passou %d dias do ano.", dia);
		break;
	case 8:
		dia += 212;
		printf("Passou %d dias do ano.", dia);
		break;
	case 9:
		dia += 243;
		printf("Passou %d dias do ano.", dia);
		break;
	case 10:
		dia += 273;
		printf("Passou %d dias do ano.", dia);
		break;
	case 11:
		dia += 304;
		printf("Passou %d dias do ano.", dia);
		break;
	case 12:
		dia += 335;
		printf("Passou %d dias do ano.", dia);
		break;
	default:
		printf("Entre com um valor para 'mês' válido. [1 = Janeiro... 12 = Dezembro.]");
		break;
	}

	return 0;
}
