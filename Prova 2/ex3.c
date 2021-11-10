#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define sizeName 15
#define sizeCars 50
/*Questão 3 (2.5 pontos)-Não precisa utilizar função:
Crie uma estrutura para representar um carro, contendo: marca (máximo 15 letras), ano e
valor.
Crie um programa que contenha um menu com as seguintes opções:
a) Entre com os cars de 50 carros.
b) Solicite um valor p, e imprima todos os carros com o valor inferior a p.
c) Sair (Única forma de encerrar o programa)*/
int main()
{
	int menu, i, ok = 0, inex=0;
	float preco;
	typedef struct
	{
		int ano;
		char marca[sizeName];
		float valor;
	} car;

	car carro[sizeCars];

	while (menu != 3)
	{
		printf("\n-------------------------O que você quer fazer?-------------------------\n1 - Informar os dados dos carros\n2 - Consultar carros com base num valor\n3 - Sair\nOperação: ");
		scanf("%d", &menu);

		if (menu < 1 || menu > 3)
		{
			printf("\nOpção inválida, tente novamente!.\n");
		}
		switch (menu)
		{
		case 1:
			for (i = 0; i < sizeCars; i++)
			{
				printf("Marca do carro: ");
				scanf("%s", &carro[i].marca);
				printf("Ano do carro: ");
				scanf("%d", &carro[i].ano);
				printf("Valor do %dº carro: ", i + 1);
				scanf("%f", &carro[i].valor);
				ok++;
				printf("\n");
			}
			break;

		case 2:
			if (ok == 0)
			{
				printf("\nPreencha os dados na opção 1. Tente novamente!\n\n");
				break;
			}
			else
			{
				printf("Digite o valor máximo: ");
				scanf("%f", &preco);

				for (i = 0; i < sizeCars; i++)
				{
					if (carro[i].valor <= preco)
					{
						printf("\nCarro da marca %s, do ano de %d: %.2f\n", carro[i].marca, carro[i].ano, carro[i].valor);
						inex++;
					}
				}
				if(inex==0){
					printf("Só temos carros mais caros! Tente novamente com outro valor :)\n");
				}
			}
			break;

		case 3:
			printf("Obrigado por usar nosso software! Até a próxima :)");
			return 0;
		}
	}
}