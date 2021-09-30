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
	int dia, mes, ano, bissexto=0;
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
		//printf("teste");
		dia++;
		bissexto++;
	}
	switch (mes){ //horrivel isso, mas unica forma q encontrei
	case 1:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		printf("Passou %d dias do ano.", dia);
		break;
	case 2:
		if(dia>28 && bissexto==0){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 31;
		printf("Passou %d dias do ano.", dia);
		break;
	case 3:
	if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 59;
		printf("Passou %d dias do ano.", dia);
		break;
	case 4:
		if(dia>30){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 90;
		printf("Passou %d dias do ano.", dia);
		break;
	case 5:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 120;
		printf("Passou %d dias do ano.", dia);
		break;
	case 6:
		if(dia>30){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 151;
		printf("Passou %d dias do ano.", dia);
		break;
	case 7:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 181;
		printf("Passou %d dias do ano.", dia);
		break;
	case 8:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 212;
		printf("Passou %d dias do ano.", dia);
		break;
	case 9:
		if(dia>30){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 243;
		printf("Passou %d dias do ano.", dia);
		break;
	case 10:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 273;
		printf("Passou %d dias do ano.", dia);
		break;
	case 11:
		if(dia>30){
			printf("Tente novamente com algum dia válido.");
			break;	
		}
		dia += 304;
		printf("Passou %d dias do ano.", dia);
		break;
	case 12:
		if(dia>31){
			printf("Tente novamente com algum dia válido.");
			break;
		}
		dia += 335;
		printf("Passou %d dias do ano.", dia);
		break;
	default:
		printf("Entre com um valor para 'mês' válido. [1 = Janeiro... 12 = Dezembro.]");
		break;
	}

	return 0;
}
