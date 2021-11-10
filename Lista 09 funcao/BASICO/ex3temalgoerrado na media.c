#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*3. Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o
procedimento calcula a média aritmética das notas do aluno e se for P, a média ponderada (pesos: 5, 3 e 2). A média
calculada deve ser retornada para o programa principal*/
float calculaMedia(float notas[], int aux);
int main() {
	int i, aux=2;
	float notas[2] = {},resposta;

	printf("Você deseja calcular a média aritmética (0) ou ponderada (1)?\n");
	scanf("%d", &aux);

	for (i = 0; i < 3; i++)
	{
		printf("Digite a nota %d:", i+1);
		scanf("%f", &notas[i]);
	}
	resposta = calculaMedia(notas,aux);
	printf("%.2f", resposta);
	return 0;
}
float calculaMedia(float notas[], int aux){
	int i;
	float pesos[3] = {5.0, 3.0, 2.0}, resultado;
	if(aux==1){
		for(i=0; i<3; i++ ){
			notas[i] *= pesos[i]; 
		}
		resultado = (notas[0] + notas[1] + notas[2])/10;
		return(resultado);
	}else{
		resultado = (notas[0] + notas[1] + notas[2])/3;
		return(resultado);
	}
}
