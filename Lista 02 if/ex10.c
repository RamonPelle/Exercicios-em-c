#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 10. Escrever um programa que leia 3 valores reais a, b e c e apresente um menu com as opções abaixo (use
switch para o menu):
1. a área do triângulo que tem a por base e b por altura.
2. a área do círculo de raio c.
3. a área do trapézio que tem a e b por bases e c por altura.
4. a área do quadrado de lado b.
5. a área do retângulo de lados a e b.
 */
int main(){
    float a,b,c;
    int r; //resposta
    printf("Qual o valor para 'a'");
    scanf("%f", &a);
    printf("Qual o valor para 'b'");
    scanf("%f", &b);
    printf("Qual o valor para 'c'");
    scanf("%f", &c);

    printf("O que você quer calcular?\n
    1. a área do triângulo que tem a por base e b por altura.\n
    2. a área do círculo de raio c.\n
    3. a área do trapézio que tem a e b por bases e c por altura.\n
    4. a área do quadrado de lado b.\n 
    5. a área do retângulo de lados a e b.");

    // 1- b.h/2
    // 2- pi.r²
    // 3- (B+b).h/2
    // 4- lado vs lado
    // 5 - lado vs lado

    switch(r){
        case 1:

        break;
        case 2:
        
        break;
        case 3:
        
        break;
        case 4:
        
        break;
        case 5:
        
        break;
        default:

    }
	setlocale(LC_ALL, "Portuguese");
    return 0;
}
