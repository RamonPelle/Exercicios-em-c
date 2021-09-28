#include <stdio.h>
#include <stdlib.h>

/* 5. Um número inteiro é primo se é divisível apenas por 1 e por ele mesmo. Escreva um programa que verifique se um
número inteiro fornecido pelo teclado é primo.*/

int main() {
	int i, n, verificar=0;
    printf("Qual o número? \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            verificar++;
            /* printf("%d \n", i); */
        }
    }
    if(verificar>2){
        printf("O número não é primo");
    }else{
        printf("O número é primo");
    }

	return 0;
}
