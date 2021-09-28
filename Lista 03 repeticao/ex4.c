#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 4. Escreva um programa que exiba os números múltiplos de 7 entre 100 e 1.000, inclusive. */
int main(){
    int i;
    printf("Múltiplos de 7:");
    for(i=100; i<=1000; i++){
        if(i%7==0){
            printf("%d \n", i);
        }
    }
    
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
