#include <stdio.h>
#include <stdlib.h>

/* DESAFIO - Escreva um programa que imprima um calendário para um determinado mês. O calendário deve
conter cada dia do mês e o dia da semana correspondente. A entrada consiste de um inteiro especificando em que dia da
semana cai o primeiro dia do mês (1=Domingo, 2=Segunda,...,7=Sábado) e um inteiro especificando o número de dias
que o mês possui.
Exemplo: p = 3 n = 31
													D S T Q Q S S
														1 2 3 4 5
													6 7 8 9 10 11 12
													13 14 15 16 17 18 19
													20 21 22 23 24 25 26
													27 28 29 30 31
 */
int main(){
	int i, j, diaSemana, diasMes, calendario;
	printf("Qual o número de dias do mês?\n");
	scanf("%d", &diasMes);
	printf("Em que dia da semana cai o primeiro dia do mês (1=Domingo, 2=Segunda,...,7=Sábado)? \n");
	scanf("%d", &diaSemana);

	calendario = diasMes;
	diasMes=1;

	printf("D  S  T  Q  Q  S  S\n");
	for(i=1; i<=6; i++){
		for(j=1; j<=7; j++){
			if(diaSemana<=diasMes){
				if(diasMes<=calendario){
					if(diasMes<10){
						printf("%d  ",diasMes);
					}else{
						printf("%d ",diasMes);
					}
					diasMes++;
			}
			}else{
				printf("  ");
				diaSemana--;
			}
		}
		printf("\n");
	}
	return 0;
}
