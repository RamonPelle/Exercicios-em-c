#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 5. Produza três versões de um programa que exiba N asteriscos em uma linha sendo o valor N
fornecido pelo usuário. A primeira versão deve utilizar o comando for, a segunda o comando
while e a terceira o comando do … while. Compare as três versões. */
int main(){
    int i=0, n;
    printf("Qual o valor de *? \n");
    scanf("%d", &n);

    printf("Do while: \n");
    do{
        printf("*");
        i++;
    }while (i<n);
    
    printf("\nWhile: \n");
    i = 0;
    while (i<n){
        printf("*");
        i++;
    }
    
    printf("\nFor: \n");
    for(i=0; i<n; i++){
        printf("*");
    }

	setlocale(LC_ALL, "Portuguese");
    return 0;
}
