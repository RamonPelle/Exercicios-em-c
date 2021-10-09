#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa de auxílio para vendedores de uma loja. Implemente o seguinte menu:
1- Pagamento a vista: solicite quantidade, valor unitário e calcule o total a pagar com desconto
de 10%.
2- Pagamento a prazo: solicite quantidade, valor unitário e quantidade de parcelas (não ofereça
desconto e permita no máximo 6x). Se o usuário digitar uma quantidade de parcelas errada,
solicite novamente até que ele digite um valor válido.
3- Sair (só deve encerrar o programa ao escolher essa opção) */

int main() {
	int n, qtdItens, qtdParcelas/*maximo 6*/;
	float vUnitario, total, desconto=0;
	while(1<2){
		printf("------------------------------------------------\nO que você quer fazer?\nOpção 1: Pagamento a vista!\nOpção 2: Pagamento a prazo!\nOpção 3: Sair!\n------------------------------------------------\n");
		scanf("%d", &n);
		if(n==1){
			printf("Qual a quantidade de itens comprados?\n");
			scanf("%d", &qtdItens);
			printf("Qual o valor unitário?\n");
			scanf("%f", &vUnitario);

			if(qtdItens==0||vUnitario==0){
				printf("Você precisa de no mínimo um item e com valor maior que 0. Tente novamente.\n");
				break;
			}	

			total = qtdItens * vUnitario;
			desconto = total - (total*0.10);

			printf("Então o valor total ficou: %.2f, mas foi aplicado desconto de 10%%, então você pagará %.2f :)", total, desconto);
		}else if(n==2){
			printf("Qual a quantidade de itens comprados?\n");
			scanf("%d", &qtdItens);
			printf("Qual o valor unitário?\n");
			scanf("%f", &vUnitario);
			if(qtdParcelas==99){
				printf("Encerrando.");
				break; 
			} 
			printf("Qual a quantidade de parcelas?\n");
			scanf("%d", &qtdParcelas);

			total = qtdItens * vUnitario;

			if(qtdItens==0||vUnitario==0){
				printf("Você precisa de no mínimo um item e com valor maior que 0. Tente novamente.\n");
				break;
			}	
			while(qtdParcelas>6){
				printf("O máximo de parcelas é 6. Tente novamente. Caso deseje encerrar a operação, imprima 99.\n");
				scanf("%d", &qtdParcelas);
			}
			if(qtdParcelas==0){ //se nao for feita a verificacao, na hora de fazer total/qtdparcelas vai dar erro, pois sera feita uma divisao por 0.
				qtdParcelas++;
			}

			printf("Então o valor total ficou: %.2f, mas a compra foi dividida em %d parcelas, então você pagará %.2f cada :))", total, qtdParcelas, (total/qtdParcelas));
		}else if(n==3){

			printf("Encerrando.");
			break;
		}else{
			printf("Digite um valor entre 1-3 para executar o programa. Tente novamente.");
		}

	}
	return 0;
}
