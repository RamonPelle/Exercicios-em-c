#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 1. Escreva um programa que imprima os N primeiros números naturais ímpares, onde N é
informado pelo teclado. */
int main(){
    int n,i;
    printf("Até qual valor você quer descobrir os números ímpares?? %d \n", n);
    scanf("%d", &n);

    printf("Resultados:\n");
    for(i=0; i<n; i++){
        if(i%2==1){
            printf("%d \n",i);
        }
        
    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
