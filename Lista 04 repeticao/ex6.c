#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* 6. Escreva um programa que, para um dado valor inteiro positivo, verifica se tal valor é uma potência de 2. Em caso
afirmativo, o programa deve fornecer o valor da potência. Em caso contrário, uma mensagem apropriada deve ser
gerada */
int main(){
    int n;
    float log;
    printf("Qual o número? \n");
    scanf("%d", &n);

    log = log10f(n) / log10f(2);
    n = log;
/*  printf("n:, %d\n", n);
    printf("log: %f\n", log);

    printf("teste lógico: %d",n == log); */

 	if(n == log){
		printf("É potencia"); //1
	}else{
		printf("Não é potencia"); //0
	} 
    return 0;
}
