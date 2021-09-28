#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 2. Solicite ao usuário 2 números (limite inferior e limite superior) e imprima todos os números
entre eles, incluindo-os */
int main(){
    int limInf, limSup, i;
    printf("Limite inferior: \n");
    scanf("%d", &limInf);
	printf("Limite supeiror: \n");
    scanf("%d", &limSup);
    printf("Os números entre os limites são: \n");
    for(i = limInf; i<=limSup; i++){
        printf("%d \n", i);
    }
    setlocale(LC_ALL, "Portuguese");
    return 0;
}
