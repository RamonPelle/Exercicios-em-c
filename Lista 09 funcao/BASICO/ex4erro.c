#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*4. Faça um programa com 2 funções, uma função será responsável por ler um número e garantir que esse número seja
inteiro e positivo. A outra função identifica e imprime uma mensagem informando se o número é primo ou não.*/
int verificacaoInt(int n);
void serPrimo(int n);

int main()
{
	int num, aux = 0;
	printf("Digite o número: ");
	scanf("%d", num);

	aux = verificacaoInt(num);
	serPrimo(aux);
	return 0;
}
int verificacaoInt(int n)
{
	while (n < 0)
	{
		printf("valor incorreto, digite novamente: ");
		scanf("%d", &n);
	}
	return n;
}
void serPrimo(int n)
{
	int i, verificar=0;
	for(i=1; i<=n; i++){
        if(n%i==0){
            verificar++;
        }
    }
    if(verificar>2){
        printf("O número não é primo");
    }else{
        printf("O número é primo");
    }
}
