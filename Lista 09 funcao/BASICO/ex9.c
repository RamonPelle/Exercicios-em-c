#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Escreva uma função que receba por parâmetro um valor inteiro e positivo N e retorna o valor de S. (Dica: crie uma
função que calcula o fatorial e essa função será chamada dentro da função que está calculando o S)
S = 1 + 1/(1!) + 1/(2!) + 1/(3!) + 1 /(N!) */

float s (int n);
int fato (int n);
int main ( ){
	float soma;
	int n;
	
	printf ("Escreva um número: ");
	scanf ("%d", &n);
	
	soma = s (n);
	printf ("O valor final é %.2f\n", soma);

	return 0;
}
float s (int n){
	float soma=0;
	int i, f;
	for (i=0; i<=3; i++){
		f = fato(i);
		soma += 1.0/f;
	}
	
	f = fato(n);
    soma += 1.0/f;
    
	return soma;
}
int fato (int n){
	int i, f=1;
	for (i=1; i<=n; i++){
		f *= i;
	}
	return f;
}