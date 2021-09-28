#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/* 2. Escreva um programa que mostre uma contagem regressiva iniciando em 10 e terminando em 0. Mostre a
mensagem "FIM!" após os 10 segundos. Crie 3 versões desse código, a primeira utilizando for, a segunda while, e a
terceira do while. DICA: O comando para dormir 1 segundo é: sleep(1); */
int main() {
	int i=/*1*/0; //usar 10 com while

	// while (i>=0)
	// {
	// 	printf("%d \n", i);
	// 	i--;
	// 	sleep(1);
	// }
	for(i=10; i>=0; i--){
		printf("%d \n", i);
		sleep(1);
	}
	printf("Fim!");

	return 0;
}
