#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 4. Escreva um programa que leia um número inteiro e calcule sua raiz quadrada. O programa deve evitar
calcular a raiz de um número negativo. */
int main(){
    int v;
    float raiz=0;
    printf("Entre com um valor inteiro: ");
    scanf("%d",&v);serir um número maior q
    raiz = sqrt(v);
    if(v<1){
        printf("Ops! Você precisa inserir um número maior que zero. Tente novamente.");
    }else{
        printf("A raiz quadrada desse número é:%2.f", raiz);
    } 
    setlocale(LC_ALL, "Portuguese");
    return 0;
}
