#include <stdio.h>
#include <stdlib.h>
/*Questão 3 (2,5 pontos)
 A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci.
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um
programa em C que solicite um valor n para o usuário e mostre os n primeiros números dessa série.
[Saída, simulando n=20]
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181*/
int main(){
    int n, a = 0, b = 1, fibo;
    printf("Digite um numero: ");
    do{
        scanf("%d", &n);
    }while(n < 0); //vai repetir caso o n seja negativo

    if(n==0)
        printf("0");

    else{
        printf("%d ", a);
        for(int i =0; i<n; i++){
            fibo = a + b; //soma os anteriores
            b = a; //b recebe a, ou seja, o valor anterior
            a = fibo; //a recebe fibo, a soma anterior
            printf("%d ", fibo);
        }
    }

}
