#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 13. Faça um programa que calcule a média aritmética das três notas de um aluno e mostre, além
do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 7,
ou a mensagem "reprovado", caso contrário.
 */
int main(){
	float v1, v2, v3;
    printf("Valor da primeira nota: ");
    scanf("%f", &v1);
    printf("Valor da segunda nota: ");
    scanf("%f", &v2);
    printf("Valor da terceira nota: ");
    scanf("%f", &v3);
    float media = (v1+v2+v3)/3;
    if(media>=7){
    	printf("Aprovado!! Média: %.2f",media);
	}else{
		printf("Reprovado :c Média: %.2f",media);
	}

    return 0;
}
