#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1. Faça uma função que receba um número inteiro n, e imprima os números de 1 até n.*/
void impirmir(int n);
int main()
{
	int n;
	printf("Digite um número para n: \n");
	scanf("%d", &n);
	imprimir(n);
	return 0;
}

void imprimir(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
}
