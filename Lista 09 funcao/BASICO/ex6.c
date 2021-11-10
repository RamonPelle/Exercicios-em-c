#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*6. Faça uma função que recebe 2 notas, a função deverá calcular a média aritmética do aluno e retorna o seu conceito,
conforme a tabela abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/
float calculaMedia(float notas[]);
int main() {
	int i;
	float notas[1] = {}, resposta;
	for (i = 0; i < 2; i++)
	{
		printf("Digite a nota %d:", i+1);
		scanf("%f", &notas[i]);
	}
	resposta = calculaMedia(notas);
	printf("%.2f", resposta);
	return 0;
}
float calculaMedia(float notas[]){
	float resultado;
	resultado = (notas[0] + notas[1])/2;
	return (resultado);
	}


