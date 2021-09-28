#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Questão 2 (2,5 pontos)
Faça um programa que imprima e execute cada opção do menu.
Opção 1) Gere 3 números aleatório (entre 0 e 100) e informe qual é o maior.
Opção 2) Solicite 3 números (a, b e c) e calcule a fórmula de Bhaskara.
Opção 3) Sair (Única forma de sair, para qualquer outro número o programa deverá imprimir
uma mensagem de erro e apresentar o menu novamente).
*/
int main(){
    int n, i, nAleatorio, maior = 1;
    float a, b, c, x1, x2, delta;
    while(1<2){
        printf("------------------------------------------------\nO que você quer fazer?\nOpção 1: Gerar 3 números aleatórios!\nOpção 2: Calcular a fórmula de Bháskara!\nOpção 3: Sair!\n------------------------------------------------\n");
        scanf("%d", &n);
        if(n==1){
            srand(time(NULL));
            printf("O maior número aleatório gerado foi: \n");

            for(i=0; i<3; i++){
                nAleatorio = rand()%100; //2 / 3
                printf("%d ", nAleatorio);
                if(maior<nAleatorio){//1<2 = V / 2<3 = V
                    maior = nAleatorio; //1 -> 2 / 2-> 3
                }
            }
            printf("%d ", maior);
            printf("\n");




        }else if(n==2){ //erro aq 2 1 -3
            printf("Digite o valor do termo a: ");
            scanf("%f", &a);
            printf("Digite o valor do termo b: ");
            scanf("%f", &b);
            printf("Digite o valor do termo c: ");
            scanf("%f", &c);

            delta = b*b - 4*a*c;
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);

            if(delta < 0){
            printf("A equacao nao possui raizes reais\n");
            }else{
            printf("O valor de x1: %.2f\n", x1);
            printf("O valor de x2: %.2f\n", x2);
            }
        }else if(n==3){
            printf("Encerrando!");
            break;
        }else{
            printf("Tente outro número: 1, 2 ou 3.\n\n");
        }
    }    
    return 0;
}
