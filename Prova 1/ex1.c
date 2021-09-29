#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um numero inteiro, calcule e imprima a soma de todos os
divisores desse numero, com exceção dele próprio.
Ex: a soma dos divisores do número 66 é:
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78 */

int main(){
	int n, i=1, soma=0;
	printf("Qual número você quer somar os divisores?\n");
	scanf("%d", &n);
	if(n<0){ //nao tem como calcular os divisores de um numero negativo, entao aqui eu "converto" pra positivo pro sistema rodar.
		n -=n + n;
	}
	printf("Os divisores são: ");
	for(i=1; i<n; i++){
		if(n%i==0){
			printf("%d ", i);
			soma+= i;
		}
	}
	printf("\nLogo a soma é: %d",soma);


	return 0;
}