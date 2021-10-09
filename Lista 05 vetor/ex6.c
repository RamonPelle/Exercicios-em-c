#include <stdio.h>
#include <stdlib.h>

/* 6. Faça um programa que leia 25 valores e armazene-os em um vetor de 25 posições; Crie um
menu com as seguintes opções:
1. Encontra um valor. (Essa opção solicita um valor x, verifica se este valor está presente no vetor, 
e informa todas as posições onde existe o valor x no vetor)
2. Calcula o produto de todos os elementos do vetor;
3. Conta quantas vezes aparece o valor v no vetor. (Essa opção solicita ao usuário o
valor v)
4. Verifica se os elementos do vetor estão em ordem crescente. Se estiver ordenado,
imprima uma mensagem de vetor ordenado, caso contrário, ordene.
5. Mostre todos os números que são maiores que a média de todos os números informados.
6. Imprima o vetor.
7.sair*/
//size_t n = sizeof(number)/sizeof(number[0]);
int main() {
	int vetor[6] = {}, vetorEncontrar[6] = {}, i, menu, valorEncontrar, encontrou=0, multiplicacao, aparece, aux, ordem=0, maiorMedia=0, sair=0;
	float media=0;
	for(i=0; i<6; i++){
		printf("Digite o valor %d do vetor: \n", i+1);
		scanf("%d", &vetor[i]);
	}

	printf("-----------------------------------------\nO que você quer fazer?\n1. Encontra um valor.\n2. Calcula o produto de todos os elementos do vetor\n3. Conta quantas vezes aparece o valor v no vetor.\n4. Verifica se os elementos do vetor estão em ordem crescente.\n5. Mostre todos os números que são maiores que a média de todos os números informados.\n6. Imprima o vetor.\n7. Sair\n-----------------------------------------");
	scanf("%d", &menu);
	
	while(1<2){
		switch (menu)
		{
		case 1:
			printf("Que valor voce quer encontrar?\n");
			scanf("%d", &valorEncontrar);

			for(i=0; i<6; i++){
				if(vetor[i]==valorEncontrar){
					vetorEncontrar[i] = vetor[i];
					encontrou++;
				}
				
			}
			if(encontrou==0){
				printf("Esse valor nao existe no vetor.\n");
			break;
			}
			encontrou=0;
			printf("O valor foi encontrado na(s) posicão/posições:\n");

			for(i=0; i<6; i++){
				if(vetorEncontrar[i]!=0){
					printf("%d ", i);
					vetorEncontrar[i]=0;
				}
			}

			printf("\n");
		break;
		case 2:
			for(i=0; i<3; i++){
				multiplicacao = vetor[i] * vetor[i+1];
				printf("%d ", multiplicacao);
		}
		break;
		case 3:
			printf("Que valor voce quer encontrar?\n");
				scanf("%d", &valorEncontrar);
				for(i=0; i<6; i++){
					if(vetor[i]==valorEncontrar){
						aparece++;
					}else{
						printf("Esse valor nao existe no vetor.");
					}
			}
			printf("O valor %d aparece %d vezes no vetor.", valorEncontrar, aparece);
		break;
		case 4:
			for(i=0; i<6; i++){
				if(vetor[i]>vetor[i+1]){
					aux = vetor[i];
					vetor[i+1] = vetor[i];
					vetor[i] = aux;
					ordem++;
				}
			}
			if(ordem==0){
				printf("O vetor estava ordenado.");
			}else{
				printf("O vetor não estava ordenado, foram mudadas a ordem de %d elementos.",ordem);
			}
		break;
		case 5:
			for(i=0; i<6; i++){
				media += vetor[i];
			}
			media /=6;
			printf("Os valores maiores que a média são:\n");
			for(i=0; i<6; i++){
				if(vetor[i]>media){
					printf("%d ",vetor[i]);
					maiorMedia++;
				}	
			}
				if(maiorMedia==0){
					printf("Nenhum numero é maior que a média, que é %.2f", media);
				}
		break;
		case 6:
			printf("\nVetor: ");
			for(i=0; i<6; i++){
				printf("%d ", vetor[i]);
			}
		break;
		case 7:

			printf("Encerrando.");
		break;
		default:
		break;
		}
	}
	return 0;
}
