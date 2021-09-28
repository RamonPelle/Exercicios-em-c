#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
/* 12. Escreva um programa que implemente o jogo de adivinhação de um número. O programa
deverá escolher aleatoriamente um número inteiro entre 1 e 100, inclusive, e o usuário
deverá tentar acertar o número em até 5 palpites. A cada palpite o programa deverá exibir
uma dica informando se o palpite é maior ou menor que o número sorteado. Caso o palpite
seja igual ao número sorteado, o programa deverá mostrar uma mensagem indicando que o
usuário ganhou o jogo. Se o usuário não acertar o número após os 5 palpites, o programa
exibe o número sorteado e informa que o usuário perdeu o jogo.
 */

int main(){
    int resp, chute, i, fim=0;
    srand(time(NULL));
    resp = 1 + (rand()%100);

    printf("%d\n",resp); 
    printf("O jogo começou!! Você terá 5 chances para adivinhar o número [0-100]! Boa sorte!\n");
    for(i=0; i<5; i++){
        printf("Tentativa nº:%d\n", i+1);
        scanf("%d", &chute);
        if(chute<resp){
            printf("Você chutou um número menor!\n");
        }else if(chute>resp){
            printf("Você chutou um número maior!\n");
        }else{
            printf("Parabens! Você acertou!! O número sorteado foi: %d", resp);
            fim++;
            break;
        }
    }
    if(fim==0){
        printf("Ops! Infelizmente você perdeu o jogo. O número sorteado foi: %d", resp);
    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
