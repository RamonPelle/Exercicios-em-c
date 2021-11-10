#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*8. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.
S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N.*/
float equacao(int n);
int main() {
	int n;
	float resultado;
	printf("Qual o valor de n?\n");
	scanf("%d", &n);
	resultado = equacao(n);
	printf("Resultado: %.2f",resultado);

	return 0;
}
float equacao(int n){
	int i;
	float resultado = 0;
	for(i=1; i<=n; i++){
		resultado += 1.0/i;
	}
	return resultado;
}
