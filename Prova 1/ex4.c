#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que solicite ao usuário um valor N inteiro e positivo (garanta que não será
digitado um número negativo), calcule o mostre o valor E, conforme a formula a seguir:
E= 1 −1/1! + 1/2! - 1/3! + ... +-1/N!*/

int main(){
    int n, i, j,fatorial =1;
    float s=1.0;//comeco com 1 pois E = 1 - ..., logo preciso apenas declarar a variavel definida como 1 
	//para que as outras operacoes sejam realizadas conforme solicitado no enunciado.
    printf("Qual o valor de N? \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
		j=i;
		for(fatorial = 1; j > 1; j = j - 1){
			fatorial = fatorial * j;
		}
			if(i%2==0){
				//printf("SOMANDO i = %d s = %f",i,s); //so p verificar
				s += (1.0/fatorial);
			}else{
				//printf("Fatorial: %d",fatorial);// so pra verificar
				//printf(" SUBTRAINDO i = %d s = %f",i,s);//so p verificar
				s -= (1.0/fatorial); 
			}
		}
    printf("%.5f", s);
	
    return 0;
}

