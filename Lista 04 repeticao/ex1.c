#include <stdio.h>
#include <stdlib.h>

/*1. Escreva um programa que leia um inteiro N e imprima a soma dos N primeiros números inteiros */

int main() {
	int i, n, soma=0;
	printf("Digite o número: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		soma+=i;
	}
	printf("A soma dos %d primeiros números é: %d", n, soma);
	return 0;
}
