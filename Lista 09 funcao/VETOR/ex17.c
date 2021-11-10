#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 25
/*17. Faça um programa que declare um vetor de 25 posições e crie as seguinte 5 funções:
a) Uma função para preencher o vetor do programa principal;
b) Uma função que recebe um valor inteiro x e o vetor do programa principal, essa função verifica e imprime a
posição que ocorre o valor x no vetor;
c) Uma função que calcule o produto de todos os elementos do vetor por uma constante solicitada ao usuário;
d) Uma função que conte a quantidade de vezes que aparece o valor v, dado pelo usuário, no vetor;
e) Uma função que verifique se os elementos do vetor estão em ordem crescente, essa função deve imprimir apenas
"Vetor ordenado" ou "Vetor não ordenado".*/
void preencher(int vetor[]);
int main() {
	int i, vetor[size]= {};

	return 0;
}
void preencher(int vetor[]){
	int i, resp;// rand()%100
	srand(time(NULL));
	for(i=0; i<size; i++){
		vetor[i] = rand()%100;
	}
}
