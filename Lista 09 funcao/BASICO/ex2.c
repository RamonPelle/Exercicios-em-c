#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
#define pi 3.14159265358979
/*2. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = (4/3)*Pi*R^3).
*/
float volume(float raio);
int main() {
	float raio, resultadoVolume;
	printf("Digite o raio: \n");
	scanf("%f", &raio);
	resultadoVolume = volume(raio);
	printf("O volume é: %.2f",resultadoVolume);
	return 0;
}
float volume(float raio){
	float r;
	r = (4* pi * pow(raio,3))/3;
	return(r);
}
