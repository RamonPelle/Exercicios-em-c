#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, i, opcao, parcelas, dia, mes, ano;
	int questao = -1, soma = 0;
	float quantidade, preco, fat, aux, N;
	while (questao != 0) {	
		printf("\nDigite o número da questao de interesse?\n 1 - Soma dos Divisores;\n 2 - Programa de auxílio a vendedores;\n 3 - Dias decorridos desde o início do ano;\n 4 - Cálculo do valor E;\n 0 - Sair\nQuestão: ");
		scanf("%d", &questao);
		switch(questao) {
			case 1: {
				printf("Questão %d selecionada!\n\n", questao);
				n = -1;
				while(n < 1) {
					printf("Digite o número inteiro positivo que desejas saber a soma dos divisores: ");
					scanf("%d", &n);
					if(n < 1)
						printf("O valor precisa ser um inteiro positivo, então, por favor:\n");
				}
				printf("\nPara %d a soma dos divisores é a seguinte: \n", n);
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
				printf("\nBem vindo ao programa de auxílio para vendedores da loja!");
				opcao = 0;
				while(opcao != 3) {
					printf("\n\nEscolha uma das seguintes opções:\n 1 - Pagamento a vista;\n 2 - Pagamento a prazo;\n 3 - Sair do Pragrama;\nQual a opção desejada?\n");
					scanf("%d", &opcao);
					switch(opcao) {
						case 1:{
							printf("\nOpção de pagamento a vista selecionada:");
							printf("\nNúmero de itens comprado: ");
							scanf("%f", &quantidade);
							printf("Preço unitário do item (R$): ");
							scanf("%f", &preco);
							if((quantidade < 0) | (preco < 0)) {
								printf("Quantidade ou preco informados inválidos");
							} else {
								printf("\nTotal a pager (10%% de desconto): R$ %.2f \n", 0.9 * preco * quantidade);	
							}
							break;
						}
						case 2:{
							printf("\nOpção de pagamento a prazo selecionada:");
							printf("\nNúmero de itens comprado: ");
							scanf("%f", &quantidade);
							printf("Preço unitário do item (R$): ");
							scanf("%f", &preco);
							parcelas = 0;
							while ((parcelas <= 0) | (parcelas > 6)) {
								printf("Número de parcelas desejada:");
								scanf("%d", &parcelas);
								if((parcelas >= 1) | (parcelas <= 6)) {
									if((quantidade < 0) | (preco < 0)) {
										printf("Quantidade ou preco informados inválidos");
									} else {
										printf("\nValor total a pagar: R$ %.2f - Dividido em %d parcela(s) de R$ %.2f\n", (preco * quantidade), parcelas, (preco * quantidade) / parcelas);
									}
								} else {
									printf("\nNúmero de parcelas inválido, só é possível parcelar em 1 a 6 parcelas, por favor, digite novamente o \n");
								}
							}
							break;
						}
						case 3:{
							printf("Saindo do programa");
							break;
						}
						default:{
							printf("Opção Inválida!\n");
							break;
						}
					}
				}	
				system("pause");
				break;
			}
			case 3: {
				printf("\nPara saber quantos dias foram transcorridos desde o início do ano, se faz necessário preencher três informações:\n");
				printf("Dia do mês: ");
				scanf("%d", &dia);
				printf("Mês em valor numérico: ");
				scanf("%d", &mes);
				printf("Ano: ");
				scanf("%d", &ano);
				soma = 0;
				if((ano % 400 == 0) | ((ano % 4 == 0) & (ano % 100 != 0))) {// Cálculo para anos bissextos
					i = 1;
				} else {
					i = 0;
				}
				if(dia < 1) {
					printf("Dia inválido");
					soma = -1;
				}
				if((mes > 12) || (mes < 1)) {
					printf("Mês inválido!");
				}
				if(soma != -1)
					switch(mes) {
						case 1: {
							if(dia <= 31){
								soma += dia;
							} else {
								printf("Dia do mês inválido, janeiro possui somente 31 dias!");
							}
							break;
						}
						case 2: {
							if(dia <= 28 + i){
								soma += dia + 31;
							} else {
								printf("Dia do mês inválido, fevereiro de %d possui somente %d dias!", ano, 28 + i);
							}
							break;
						}
						case 3: {
							if(dia <= 31){
								soma += dia + 59 + i;
							} else {
								printf("Dia do mês inválido, março possui somente 31 dias!");
							}
							break;
						}
						case 4: {
							if(dia <= 30){
								soma += dia + 90 + i;
							} else {
								printf("Dia do mês inválido, abril possui somente 30 dias!");
							}
							break;
						}
						case 5: {
							if(dia <= 31){
								soma += dia + 120 + i;
							} else {
								printf("Dia do mês inválido, maio possui somente 31 dias!");
							}
							break;
						}
						case 6: {
							if(dia <= 30){
								soma += dia + 151 + i;
							} else {
								printf("Dia do mês inválido, junho possui somente 30 dias!");
							}
							break;
						}
						case 7: {
							if(dia <= 31){
								soma += dia + 181 + i;
							} else {
								printf("Dia do mês inválido, julho possui somente 31 dias!");
							}
							break;
						}
						case 8: {
							if(dia <= 31){
								soma += dia + 212 + i;
							} else {
								printf("Dia do mês inválido, agosto possui somente 31 dias!");
							}
							break;
						}
						case 9: {
							if(dia <= 30){
								soma += dia + 243 + i;
							} else {
								printf("Dia do mês inválido, setembro possui somente 30 dias!");
							}
							break;
						}
						case 10: {
							if(dia <= 31){
								soma += dia + 273 + i;
							} else {
								printf("Dia do mês inválido, outubro possui somente 31 dias!");
							}
							break;
						}
						case 11: {
							if(dia <= 30){
								soma += dia + 304 + i;
							} else {
								printf("Dia do mês inválido, novembro possui somente 30 dias!");
							}
							break;
						}
						case 12: {
							if(dia <= 31){
								soma += dia + 334 + i;
							} else {
								printf("Dia do mês inválido, dezembro possui somente 31 dias!");
							}
							break;
						}
						default:
							printf("Mês informado Inválido!");
					}
				if(soma > 0)
					printf("%d dias do início do ano até a data informada.", soma);
				printf("\nSaindo do programa!\n");
				system("pause");
				break;
			}
			case 4: {
				n = 0;
				fat = 1;
				aux = 1;
				N = 1;
				printf("Questão %d selecionada!\n\n", questao);
				while(n < 1) {
					printf("Digite um número positivo e inteiro para o cálculo do valor E: ");
					scanf("%d", &n);
					if(n < 1)
						printf("O número %d não é inteiro e positivo, por favor:\n", n);
				}
				printf("\nPara %d o valor E é o seguinte: \n", n);
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
					printf("Questão Inválida, por favor selecione uma questão válida\n\n");
					system("pause");
				}
				break;
			}
		}
	}
	return 0;
}
