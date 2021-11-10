#include <stdio.h>
#include <stdlib.h>
#define size 5
/* Questão 1 (2.5 pontos) – Uso obrigatório de função:
Faça um programa que crie um vetor com 200 posições de números inteiros, logo em
seguida solicite que o usuário digite apenas números de -10 até 10 (Se digitar fora dessa
faixa, solicite novamente, até que faça o preenchimento correto). Por fim, faça uma função
que receba o vetor e verifique se o vetor está espelhado, da seguinte forma: se o primeiro
número é igual ao último, o segundo número é igual ao penúltimo, e assim por diante.
Para exemplificar, veja um vetor com o tamanho menor que o solicitado:
1 -3 6 9 -4 -4 9 6 -3 1 */
void espelhado(int vetor[]);
int main(){
	int i,n, vetor[size] = {};
	for(i=0; i<size; i++){
		printf("Digite um numero entre [-10,10].\n");
		scanf("%d", &n);
		if(n < -10 || n > 10){
			printf("OPS! Você precisa digitar um numero entre [-10,10].\n");
			i--;
		}else{
			vetor[i] = n;
		}
	}
	espelhado(vetor);
	return 0;
}

void espelhado(int vetor[]){
	int i, aux=0;
	for(i=0; i<size; i++){
		//printf("Vetor[i] = %d, vetor[size-i] = %d, i = %d\n", vetor[i], vetor[size-i-1],i);
		if(vetor[i] == vetor[size-1-i]){
			aux++;
		}
	}
	if(aux==size){
		printf("É espelhada");
	}else{
		printf("Não é espelhada");
	}
	
} 