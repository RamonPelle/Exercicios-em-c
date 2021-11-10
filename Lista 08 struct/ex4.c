#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 15
#define quantiaEletro 2
/*faca um programa que controla o consumo de energia dos eletrodomesticos
de uma casa e 
a) crie e leia 5 eletrod que contem nome (15letras), potencia(real, em kw)
e tempo ativo por dia (real, em horas)
b) leia um tempo t (dias), calcule e mostre o consumo total na casa e 
o consumo relativo de cada eletrodomestico (consumo/consumototal) nesse periodo de tempo
apresente este ultimo dado em %.*/
int main() {
	int i, dias;
	float consumoTotal=0;
	typedef struct{
		char nome[size];
		float tempoAtivo;
		float pot, consumoHoras, consumoTotalDias, consumoRel;
	}eletronico;
	eletronico eletrodomestico[quantiaEletro];

	printf("Digite as informações sobre os eletrodomesticos! :)\n");
	for(i=0; i<quantiaEletro; i++){
		fflush(stdin);
		printf("Qual o nome?\n");
		gets(eletrodomestico[i].nome);
		printf("Qual a potência? [Real, em hw]\n");
		scanf("%f", &eletrodomestico[i].pot);
		printf("Qual o tempo ativo? [Horas]\n");
		scanf("%f", &eletrodomestico[i].tempoAtivo);
	}
	printf("Digite a quantidade de dias desejada para fazer o cálculo de consumo: ");
	scanf("%d", &dias);

	for(i=0; i<quantiaEletro; i++){
		eletrodomestico[i].consumoHoras = eletrodomestico[i].pot * eletrodomestico[i].tempoAtivo;
		eletrodomestico[i].consumoTotalDias = eletrodomestico[i].consumoHoras * dias;
		consumoTotal += eletrodomestico[i].consumoTotalDias;
	}
	for(i=0; i<quantiaEletro; i++){
		eletrodomestico[i].consumoRel = eletrodomestico[i].consumoTotalDias / consumoTotal;
		printf("O eletrodoméstico %s tem consumo relativo de %.2f%%.\n", eletrodomestico[i].nome, (eletrodomestico[i].consumoRel*100));
	}
	printf("-------------Consumo total: %.2f-------------", consumoTotal);
	return 0;
}

