#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, i, opcao, parcelas, dia, mes, ano;
	int questao = -1, soma = 0;
	float quantidade, preco, fat, aux, N;
	while (questao != 0) {	
		printf("\nDigite o n�mero da questao de interesse?\n 1 - Soma dos Divisores;\n 2 - Programa de aux�lio a vendedores;\n 3 - Dias decorridos desde o in�cio do ano;\n 4 - C�lculo do valor E;\n 0 - Sair\nQuest�o: ");
		scanf("%d", &questao);
		switch(questao) {
			case 1: {
				printf("Quest�o %d selecionada!\n\n", questao);
				n = -1;
				while(n < 1) {
					printf("Digite o n�mero inteiro positivo que desejas saber a soma dos divisores: ");
					scanf("%d", &n);
					if(n < 1)
						printf("O valor precisa ser um inteiro positivo, ent�o, por favor:\n");
				}
				printf("\nPara %d a soma dos divisores � a seguinte: \n", n);
				soma = 1;
				printf("1");
				for(i = 2; i <= n / 2; i++)
					if (n % i == 0) {
						printf(" + %d", i);
						soma += i;
					}						
				printf(" = %d \n\n", soma);  
			  	system("pause");
				break;
			}
			case 2: {
				printf("\nBem vindo ao programa de aux�lio para vendedores da loja!");
				opcao = 0;
				while(opcao != 3) {
					printf("\n\nEscolha uma das seguintes op��es:\n 1 - Pagamento a vista;\n 2 - Pagamento a prazo;\n 3 - Sair do Pragrama;\nQual a op��o desejada?\n");
					scanf("%d", &opcao);
					switch(opcao) {
						case 1:{
							printf("\nOp��o de pagamento a vista selecionada:");
							printf("\nN�mero de itens comprado: ");
							scanf("%f", &quantidade);
							printf("Pre�o unit�rio do item (R$): ");
							scanf("%f", &preco);
							if((quantidade < 0) | (preco < 0)) {
								printf("Quantidade ou preco informados inv�lidos");
							} else {
								printf("\nTotal a pager (10%% de desconto): R$ %.2f \n", 0.9 * preco * quantidade);	
							}
							break;
						}
						case 2:{
							printf("\nOp��o de pagamento a prazo selecionada:");
							printf("\nN�mero de itens comprado: ");
							scanf("%f", &quantidade);
							printf("Pre�o unit�rio do item (R$): ");
							scanf("%f", &preco);
							parcelas = 0;
							while ((parcelas <= 0) | (parcelas > 6)) {
								printf("N�mero de parcelas desejada:");
								scanf("%d", &parcelas);
								if((parcelas >= 1) | (parcelas <= 6)) {
									if((quantidade < 0) | (preco < 0)) {
										printf("Quantidade ou preco informados inv�lidos");
									} else {
										printf("\nValor total a pagar: R$ %.2f - Dividido em %d parcela(s) de R$ %.2f\n", (preco * quantidade), parcelas, (preco * quantidade) / parcelas);
									}
								} else {
									printf("\nN�mero de parcelas inv�lido, s� � poss�vel parcelar em 1 a 6 parcelas, por favor, digite novamente o \n");
								}
							}
							break;
						}
						case 3:{
							printf("Saindo do programa");
							break;
						}
						default:{
							printf("Op��o Inv�lida!\n");
							break;
						}
					}
				}	
				system("pause");
				break;
			}
			case 3: {
				printf("\nPara saber quantos dias foram transcorridos desde o in�cio do ano, se faz necess�rio preencher tr�s informa��es:\n");
				printf("Dia do m�s: ");
				scanf("%d", &dia);
				printf("M�s em valor num�rico: ");
				scanf("%d", &mes);
				printf("Ano: ");
				scanf("%d", &ano);
				soma = 0;
				if((ano % 400 == 0) | ((ano % 4 == 0) & (ano % 100 != 0))) {// C�lculo para anos bissextos
					i = 1;
				} else {
					i = 0;
				}
				if(dia < 1) {
					printf("Dia inv�lido");
					soma = -1;
				}
				if((mes > 12) || (mes < 1)) {
					printf("M�s inv�lido!");
				}
				if(soma != -1)
					switch(mes) {
						case 1: {
							if(dia <= 31){
								soma += dia;
							} else {
								printf("Dia do m�s inv�lido, janeiro possui somente 31 dias!");
							}
							break;
						}
						case 2: {
							if(dia <= 28 + i){
								soma += dia + 31;
							} else {
								printf("Dia do m�s inv�lido, fevereiro de %d possui somente %d dias!", ano, 28 + i);
							}
							break;
						}
						case 3: {
							if(dia <= 31){
								soma += dia + 59 + i;
							} else {
								printf("Dia do m�s inv�lido, mar�o possui somente 31 dias!");
							}
							break;
						}
						case 4: {
							if(dia <= 30){
								soma += dia + 90 + i;
							} else {
								printf("Dia do m�s inv�lido, abril possui somente 30 dias!");
							}
							break;
						}
						case 5: {
							if(dia <= 31){
								soma += dia + 120 + i;
							} else {
								printf("Dia do m�s inv�lido, maio possui somente 31 dias!");
							}
							break;
						}
						case 6: {
							if(dia <= 30){
								soma += dia + 151 + i;
							} else {
								printf("Dia do m�s inv�lido, junho possui somente 30 dias!");
							}
							break;
						}
						case 7: {
							if(dia <= 31){
								soma += dia + 181 + i;
							} else {
								printf("Dia do m�s inv�lido, julho possui somente 31 dias!");
							}
							break;
						}
						case 8: {
							if(dia <= 31){
								soma += dia + 212 + i;
							} else {
								printf("Dia do m�s inv�lido, agosto possui somente 31 dias!");
							}
							break;
						}
						case 9: {
							if(dia <= 30){
								soma += dia + 243 + i;
							} else {
								printf("Dia do m�s inv�lido, setembro possui somente 30 dias!");
							}
							break;
						}
						case 10: {
							if(dia <= 31){
								soma += dia + 273 + i;
							} else {
								printf("Dia do m�s inv�lido, outubro possui somente 31 dias!");
							}
							break;
						}
						case 11: {
							if(dia <= 30){
								soma += dia + 304 + i;
							} else {
								printf("Dia do m�s inv�lido, novembro possui somente 30 dias!");
							}
							break;
						}
						case 12: {
							if(dia <= 31){
								soma += dia + 334 + i;
							} else {
								printf("Dia do m�s inv�lido, dezembro possui somente 31 dias!");
							}
							break;
						}
						default:
							printf("M�s informado Inv�lido!");
					}
				if(soma > 0)
					printf("%d dias do in�cio do ano at� a data informada.", soma);
				printf("\nSaindo do programa!\n");
				system("pause");
				break;
			}
			case 4: {
				n = 0;
				fat = 1;
				aux = 1;
				N = 1;
				printf("Quest�o %d selecionada!\n\n", questao);
				while(n < 1) {
					printf("Digite um n�mero positivo e inteiro para o c�lculo do valor E: ");
					scanf("%d", &n);
					if(n < 1)
						printf("O n�mero %d n�o � inteiro e positivo, por favor:\n", n);
				}
				printf("\nPara %d o valor E � o seguinte: \n", n);
				for(i = 1; i <= n; i++) {
					fat *= i;
					aux *= -1;
					N = N + (aux / fat);
				}				
				printf("Valor N: %f \n\n", N);  
			  	system("pause");
				break;
			}
			default: {
				if (questao > 0) {
					printf("Quest�o Inv�lida, por favor selecione uma quest�o v�lida\n\n");
					system("pause");
				}
				break;
			}
		}
	}
	return 0;
}
