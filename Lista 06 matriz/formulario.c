#include <stdio.h>
#include <stdlib.h>
#define MAXLINHAS 5
#define MAXCOLUNAS 5
/* Veja o slide 11 e faça um programa que leia uma matriz 5x5 de números inteiros, logo após, 
imprima os números que estão acima da diagonal principal, incluindo a diagonal (imprima um X nas outras posições). 
- Sendo i e j os índices dos elementos da matriz:
• Diagonal principal: i = j
• Diagonal secundária : i + j = n + 1
• Abaixo da diagonal principal: i > j
• Acima da diagonal principal: i < j
• Acima da diagonal secundária: i + j < n + 1
• Abaixo da diagonal secundária: i + j > n + 1 */

int main() {
    int matriz[MAXLINHAS][MAXCOLUNAS];
    int i,j, aux;
    //escrever a matriz
    for(i=0; i<MAXLINHAS; i++){
        for(j=0; j<MAXCOLUNAS; j++){
            printf("Digite o num. da linha %d e coluna %d ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //retornar a matriz
    for(i=0; i<MAXLINHAS; i++){
        printf("\n");
        for(j=0; j<MAXCOLUNAS; j++){
            if(i<=j){
                printf("%d ", matriz[i][j]);
            }else{
                printf("X ");
            }
        }
    }
    return 0;
}
