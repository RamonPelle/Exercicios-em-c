#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 9. Um hospital precisa de um programa para calcular e imprimir os gastos de um paciente. A tabela de
preços do hospital é a seguinte:
. Quartos: Descontos:
. - particular: R$ 125,00 - Total superior à R$ 1.000,00: 15%
. - conjunto: R$ 95,00 - Total superior à R$ 500,00: 10%
. - enfermaria: R$ 75,00 - Total inferior à R$ 500,00: 5%
.
. Telefone: R$ 1,75
. Televisão: R$ 3,50
.
. Escreva um programa que leia o número de dias gastos no hospital, um caractere representando o tipo de
quarto utilizado (P, C ou E), um caractere indicando se usou ou não o telefone (S ou N), um caractere
indicando se usou ou não a televisão (S ou N) e produza a seguinte saída:
.
. Hospital Exemplo S/A
. Diárias : 5
. Tipo quarto : PARTICULAR
. Diárias : R$ 625,00
. Telefone: R$ 0,00
. Televisão : R$ 3,50
. Total : R$ 628,50
. Descontos : R$ 62,85
. Valor pago : R$ 565,65 */

int main(){
	setlocale(LC_ALL, "Portuguese");
    int dias;
    char tipo[10] = "";
    //float diarias, total = 0, televisao, telefone, descontos = 0, telefone, televisao;
    float diarias = 0, telefone = 0, televisao = 0, total = 0, descontos = 0;
  
    printf("Quantos dias foram gastos no hospital?\n");
    scanf("%d", &dias);

    printf("Qual quarto foi utilizado, particular [p], conjunto [c] ou enfermaria [e]?\n");
    scanf("%s", &tipo);
    
    if(strcmp(tipo, "c") == 0){
		strcpy(tipo, "CONJUNTO");
        
		diarias = dias * 95;
        if(diarias>500){
        	descontos = diarias * 0.10;
        }
    }else if(strcmp(tipo, "p") == 0){
        strcpy(tipo, "PARTICULAR");
        
		diarias = dias * 125;
            if(diarias>500){
        		descontos = diarias * 0.15;
            }
    }else if(strcmp(tipo, "e") == 0){
    	strcpy(tipo, "ENFERMARIA");
		diarias = dias * 75;
            if(diarias>500){
        		descontos = diarias * 0.05;
            }
    }else{
        printf("Operação inválida");
    }
    
    printf("Foi usado televisão? [1 = Sim / 2 = Não]\n");
    scanf("%f", &televisao);
    if(televisao == 1){
        televisao = 3.50;
    }
    printf("Foi usado telefone? [1 = Sim / 2 = Não]\n");
    scanf("%f", &telefone);
    if(telefone == 1){
        telefone = 1.75;
    }
    
    total = diarias + telefone + televisao;
 
    printf("Hospital ---\nDiárias: %d \nTipo do quarto: %s \nDiárias: R$ %.2f \nTelefone: R$ %.2f \nTelevisão: R$ %.2f \nTotal: R$ %.2f \nDescontos: R$ %.2f \nValor pago: R$ %.2f",
    dias, tipo, diarias, telefone, televisao, total, descontos, total-descontos);
    return 0;

}
