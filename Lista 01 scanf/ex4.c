#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 4. Faça um programa que leia quantos minutos um atleta gastou na corrida e exiba o tempo em
horas e minutos.
 */
int main(){
    int min = 0;
    int horas = 0;
    int i=0;
    printf("Quantos minutos o atleta correu? \n");
    scanf("%d",&min);
    while (min>=60){
        min -= 60;
        horas ++;
    }
    printf("Então ele correu %d", horas);
    printf(" horas e %d", min);
    printf(" minutos.");
    

    return 0;
}