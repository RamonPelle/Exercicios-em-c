#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 3. Escreva um programa que leia dois números inteiros, correspondentes ao dividendo e ao divisor de uma
divisão, e mostre o quociente e o resto. O programa deve impedir que se efetue uma divisão por zero e
imprimir uma mensagem de erro quando isso ocorrer. */
int main(){
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, resto = 0;
    float resultado;

    printf("Digite os valores para a divisão:\nDividendo: ");
    scanf("%d",&v1);

    printf("Divisor: ");
    scanf("%d",&v2);

    if(v2==0){
        printf("Ops! O divisor não pode ser 0, tente novamente! c:");
    }else{
    resultado = v1/v2;
    resto = v1%v2;
    printf("O resultado da divisão é:%2.f e o resto é: %d", resultado, resto);
    }
	
    return 0;
}
