#include <stdio.h>
#include <stdlib.h>
/*Questão 4 (2,5 pontos)
Faça um programa que solicite dois números e encontre o MDC.
Relembrando: Máximo Divisor Comum (M.D.C.) - Dois números naturais sempre têm
divisores comuns. Por exemplo: os divisores comuns de 12 e 18 são 1,2,3 e 6. Dentre eles, 6 é o
maior. Então chamamos o 6 de máximo divisor comum de 12 e 18 e indicamos m.d.c.(12,18) = 6*/
int main(){
    int n1, n2, i=1, divisor=0;

    printf("Digite o valor 1: \n");
    scanf("%d",&n1);
    printf("Digite o valor 2: \n");
    scanf("%d",&n2);
    printf("O MDC(%d,%d) é: \n",n1,n2);
    while(n1>=i && n2>=i){
        if(n1%i==0 && n2%i==0){
            if(divisor<i){
                divisor=i;
                //printf("Divisor: %d\n", divisor);
            }
            //printf("n1=%d n2=%d\n", n1, n2);
        }
        i++;
    }
    printf("%d", divisor);

    
    return 0;

}
